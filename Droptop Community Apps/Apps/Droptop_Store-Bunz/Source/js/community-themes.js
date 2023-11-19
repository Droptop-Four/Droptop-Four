/** @format */

// ---- COMMUNITY THEMES ----

const params = new Proxy(new URLSearchParams(window.location.search), {
	get: (searchParams, prop) => searchParams.get(prop),
});

let id_query = params.id;

const themesList = document.getElementById('themesList');

function convertToRawGitHubURL(githubURL) {
	const rawURL = githubURL
		.replace('github.com', 'raw.githubusercontent.com')
		.replace('/blob/', '/');
	return rawURL;
}

class Themes {
	async Items() {
		try {
			let result = await fetch(
				'https://raw.githubusercontent.com/Droptop-Four/GlobalData/v3/data/community_themes/community_themes.json'
			);
			let data = await result.json();

			let themesItems = data.themes;

			const fetchThemePromises = themesItems.map(async (item) => {
				const {
					id,
					name,
					author,
					author_link,
					desc,
					version,
					official_link,
					direct_download_link,
					secondary_link,
					image_url,
					hidden,
				} = item.theme;

				if (item.theme.official_link == '') {
					const readmeExists = false;
					return {
						id,
						name,
						author,
						author_link,
						desc,
						version,
						official_link,
						direct_download_link,
						secondary_link,
						image_url,
						hidden,
						readmeExists,
					};
				} else {
					const rawBaseURL = convertToRawGitHubURL(
						`${item.theme.official_link}`
					);

					try {
						const response = await fetch(
							`${rawBaseURL}/main/README.md`
						);
						const readmeExists = response.status === 200;
						return {
							id,
							name,
							author,
							author_link,
							desc,
							version,
							official_link,
							direct_download_link,
							secondary_link,
							image_url,
							hidden,
							readmeExists,
						};
					} catch (error) {
						const readmeExists = false;
						return {
							id,
							name,
							author,
							author_link,
							desc,
							version,
							official_link,
							direct_download_link,
							secondary_link,
							image_url,
							hidden,
							readmeExists,
						};
					}
				}
			});

			const themesItemsWithReadme = await Promise.all(fetchThemePromises);

			return themesItemsWithReadme;
		} catch (error) {
			// console.log(error);
		}
	}
}

class DisplayThemes {
	displayThemes(themes) {
		let result = '';
		themes.forEach((item) => {
			if (item.hidden != 1) {
				if (item.author_link == '') {
					if (item.official_link == '') {
						result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
					<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
					<h3 class="theme-card-name">${item.name}</h3>
					<p class="theme-card-author">Created by <a class="theme-card-author-link">${item.author}</a></p>
					<p class="theme-card-desc">${item.desc}</p>
					<div class="theme-card-buttons">
						<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
					</div>
					</div>  
				</div>
			</div>
			`;
					} else {
						if (item.readmeExists) {
							const baseLink = convertToRawGitHubURL(
								`${item.official_link}`
							);
							result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
					<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
					<h3 class="theme-card-name pointer" href="javascript:void(0)" onclick="openReadmeModal('${baseLink}')">${item.name}</h3>
					<p class="theme-card-author">Created by <a class="theme-card-author-link">${item.author}</a></p>
					<p class="theme-card-desc">${item.desc}</p>
					<div class="theme-card-buttons">
						<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
						<a class="theme-card-button" href="${item.official_link}" target="_blank">See on Github</a>
					</div>
					</div>  
				</div>
			</div>
			`;
						} else {
							result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
					<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
					<h3 class="theme-card-name">${item.name}</h3>
					<p class="theme-card-author">Created by <a class="theme-card-author-link">${item.author}</a></p>
					<p class="theme-card-desc">${item.desc}</p>
					<div class="theme-card-buttons">
						<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
						<a class="theme-card-button" href="${item.official_link}" target="_blank">See on Github</a>
					</div>
					</div>  
				</div>
			</div>
			`;
						}
					}
				} else {
					if (item.official_link == '') {
						result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
						<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
						<h3 class="theme-card-name">${item.name}</h3>
						<p class="theme-card-author">Created by <a class="theme-card-author-link" href="${item.author_link}">${item.author}</a></p>
						<p class="theme-card-desc">${item.desc}</p>
						<div class="theme-card-buttons">
							<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
						</div>
					</div>
				</div>
			</div>
			`;
					} else {
						if (item.readmeExists) {
							const baseLink = convertToRawGitHubURL(
								`${item.official_link}`
							);
							result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
						<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
						<h3 class="theme-card-name pointer" href="javascript:void(0)" onclick="openReadmeModal('${baseLink}')">${item.name}</h3>
						<p class="theme-card-author">Created by <a class="theme-card-author-link" href="${item.author_link}">${item.author}</a></p>
						<p class="theme-card-desc">${item.desc}</p>
						<div class="theme-card-buttons">
							<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
							<a class="theme-card-button" href="${item.official_link}" target="_blank">See on Github</a>
						</div>
					</div>  
				</div>
			</div>
			`;
						} else {
							result += `
			<div>
				<div class="theme-card" id="${item.id}">
					<div class="theme-card-container">
						<a><img href="javascript:void(0)" onclick="openImageModal('${item.image_url}', '${item.name}');  return false" class="theme-card-image" src="${item.image_url}" alt="${item.name} image"></a>
						<h3 class="theme-card-name">${item.name}</h3>
						<p class="theme-card-author">Created by <a class="theme-card-author-link" href="${item.author_link}">${item.author}</a></p>
						<p class="theme-card-desc">${item.desc}</p>
						<div class="theme-card-buttons">
							<a class="theme-card-button bold" href="${item.direct_download_link}">Download</a>
							<a class="theme-card-button" href="${item.official_link}" target="_blank">See on Github</a>
						</div>
					</div>  
				</div>
			</div>
			`;
						}
					}
				}
			}
		});
		themesList.innerHTML = result;
	}
}

// ---- README MODAL ----

function openReadmeModal(baseLink) {
	const modal = document.createElement('div');
	modal.classList.add('readme-modal');
	modal.innerHTML = `
		<div class="readme-modal-container">
			<div class="readme-modal-close" onclick="closeReadmeModal()">
				<svg width="50" height="50" viewBox="0 0 30 30" xmlns="http://www.w3.org/2000/svg">
					<line x1="5" y1="5" x2="25" y2="25" stroke="currentColor" stroke-width="2" />
					<line x1="25" y1="5" x2="5" y2="25" stroke="currentColor" stroke-width="2" />
				</svg>
			</div>
			<div class="readme-modal-content" id="readme-modal-content">
				
			</div>
		</div>
		`;
	document.body.appendChild(modal);

	fetch(`${baseLink}/main/README.md`)
		.then((response) => response.text())
		.then((readmeContent) => {
			const readmeModalContent = document.getElementById(
				'readme-modal-content'
			);
			marked.use(markedGfmHeadingId.gfmHeadingId());
			readmeModalContent.innerHTML = marked.parse(
				readmeContent
					.replace(/Images\//g, `${baseLink}/main/Images/`)
					.replace(/images\//g, `${baseLink}/main/images/`)
			);
		})
		.catch((error) => {
			console.error('Errore nel caricamento del README:', error);
			closeReadmeModal();
		});

	disableScroll();

	document.addEventListener('keydown', function (event) {
		if (event.key === 'Escape') {
			closeReadmeModal();
		}
	});

	modal.addEventListener('click', function (event) {
		if (event.target === modal) {
			closeReadmeModal();
		}
	});
}

function closeReadmeModal() {
	const modal = document.querySelector('.readme-modal');
	if (modal) {
		enableScroll();

		modal.remove();
		document.removeEventListener('keydown', function (event) {
			if (event.key === 'Escape') {
				closeReadmeModal();
			}
		});
	}
}

// ---- IMAGE MODAL ----

function openImageModal(imageUrl, imageName) {
	const modal = document.createElement('div');
	modal.classList.add('image-modal');
	modal.innerHTML = `
		<div class="image-modal-close" onclick="closeImageModal()">
			<svg width="50" height="50" viewBox="0 0 30 30" xmlns="http://www.w3.org/2000/svg">
				<line x1="5" y1="5" x2="25" y2="25" stroke="currentColor" stroke-width="2" />
				<line x1="25" y1="5" x2="5" y2="25" stroke="currentColor" stroke-width="2" />
			</svg>
		</div>
		<div class="image-modal-content">
            <img src="${imageUrl}" alt="${imageName}">
        </div>
    `;
	document.body.appendChild(modal);

	disableScroll();

	document.addEventListener('keydown', function (event) {
		if (event.key === 'Escape') {
			closeImageModal();
		}
	});

	modal.addEventListener('click', function (event) {
		if (event.target === modal) {
			closeImageModal();
		}
	});
}

function closeImageModal() {
	const modal = document.querySelector('.image-modal');
	if (modal) {
		enableScroll();

		modal.remove();
		document.removeEventListener('keydown', function (event) {
			if (event.key === 'Escape') {
				closeImageModal();
			}
		});
	}
}

// ---- SCROLL ACTIONS ----

function Scroll() {
	const themeElement = document.getElementById(id_query);
	if (themeElement) {
		themeElement.scrollIntoView();
	}
}

function disableScroll() {
	var node = document.createElement('style');
	node.setAttribute('type', 'text/css');
	node.textContent =
		'html, body { height: auto ! important ; overflow: hidden ! important ; }';
	document.head.prepend(node);
}

function enableScroll() {
	document.head.querySelector('style')?.remove();
}

// ---- MAIN ----

document.addEventListener('DOMContentLoaded', () => {
	const themes = new Themes();
	const displaythemes = new DisplayThemes();

	themes.Items()
		.then((themes) => displaythemes.displayThemes(themes))
		.then(Scroll);
});