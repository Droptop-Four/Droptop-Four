/** @format */

const params = new Proxy(new URLSearchParams(window.location.search), {
	get: (searchParams, prop) => searchParams.get(prop),
});

let search_query = params.s;

const selezionati = [];

const search_bar = document.getElementById('searchbar');

(async () => {
	const url = 'https://api.droptopfour.com/v1/community-creations';

	const creations_response = await fetch(url);
	const creations_json = await creations_response.json();

	const apps_items = creations_json.apps;
	const themes_items = creations_json.themes;

	if (search_query) {
		let search_query = params.s.toLowerCase();

		search_bar.value = search_query;

		for (let i in apps_items) {
			const app = apps_items[i];
			if (app.hidden != 1) {
				if (
					app.name.toLowerCase().includes(search_query) ||
					app.author.toLowerCase().includes(search_query) ||
					app.desc.toLowerCase().includes(search_query)
				) {
					app.type = 'app';
					selezionati.push(app);
				}
			}
		}

		for (let i in themes_items) {
			const theme = themes_items[i];
			if (theme.hidden != 1) {
				if (
					theme.name.toLowerCase().includes(search_query) ||
					theme.author.toLowerCase().includes(search_query) ||
					theme.desc.toLowerCase().includes(search_query)
				) {
					theme.type = 'theme';
					selezionati.push(theme);
				}
			}
		}
	}

	selezionati.sort((a, b) => {
		const nameA = (a ? a.name : a.name).toLowerCase();
		const nameB = (b ? b.name : b.name).toLowerCase();
		return nameA.localeCompare(nameB);
	});
	const searchList = document.getElementById('searchList');

	let result = '';

	for (let i in selezionati) {
		let item = selezionati[i];

		if (item.type == 'app') {
			let selected_app = item;

			result += `
        <div>
          <div class="app-card" id="${selected_app.id}" onclick="window.location='https://droptopfour.com/community-apps?id=${selected_app.id}';" style="cursor: pointer;">
            <div class="app-card-container">
              <a><img class="app-card-image" src="${selected_app.image_url}" alt="${selected_app.name} image" loading="lazy"><span class="ribbon-app">APP</span></a>
              <h3 class="app-card-name">${selected_app.name}</h3>
              <p class="app-card-version">v${selected_app.version}</p>
              <p class="app-card-author">Created by <a class="app-card-author-link">${selected_app.author}</a></p>
              <p class="app-card-desc">${selected_app.desc}</p>
              <div class="app-card-buttons">
                  <a class="app-card-button bold" href="https://droptopfour.com/community-apps?id=${selected_app.id}">View App</a>
              </div>
            </div>
          </div>
        </div>
        `;
		} else {
			let selected_theme = item;

			result += `
              <div>
                <div class="theme-card" id="${selected_theme.id}" onclick="window.location='https://droptopfour.com/community-themes?id=${selected_theme.id}';" style="cursor: pointer;">
                  <div class="theme-card-container">
                    <img class="theme-card-image" src="${selected_theme.image_url}" alt="${selected_theme.name} image" loading="lazy"><span class="ribbon-theme">THEME</span>
                    <h3 class="theme-card-name">${selected_theme.name}</h3>
                    <p class="theme-card-author">Created by <a class="theme-card-author-link">${selected_theme.author}</a></p>
                    <p class="theme-card-desc">${selected_theme.desc}</p>
                    <div class="theme-card-buttons">
                        <a class="theme-card-button bold" href="https://droptopfour.com/community-themes?id=${selected_theme.id}">View Theme</a>
                    </div>
                  </div>
                </div>
              </div>
              `;
		}
	}

	searchList.innerHTML = result;
})();
