/** @format */

const params = new Proxy(new URLSearchParams(window.location.search), {
	get: (searchParams, prop) => searchParams.get(prop),
});

let search_query = params.s;

const selezionati = [];

const search_bar = document.getElementById('searchbar');

(async () => {
	const apps_url =
		'https://raw.githubusercontent.com/Droptop-Four/GlobalData/v3/data/community_apps/community_apps.json';
	const themes_url =
		'https://raw.githubusercontent.com/Droptop-Four/GlobalData/v3/data/community_themes/community_themes.json';

	const apps_response = await fetch(apps_url);
	const themes_response = await fetch(themes_url);
	const apps_json = await apps_response.json();
	const themes_json = await themes_response.json();

	const apps_items = apps_json.apps;
	const themes_items = themes_json.themes;

	if (search_query) {
		let search_query = params.s.toLowerCase();

		search_bar.value = search_query;

		for (let i in apps_items) {
			const app = apps_items[i].app;
			if (app.hidden != 1) {
				if (
					app.name.toLowerCase().includes(search_query) ||
					app.author.toLowerCase().includes(search_query) ||
					app.desc.toLowerCase().includes(search_query)
				) {
					selezionati.push(apps_items[i]);
				}
			}
		}

		for (let i in themes_items) {
			const theme = themes_items[i].theme;
			if (theme.hidden != 1) {
				if (
					theme.name.toLowerCase().includes(search_query) ||
					theme.author.toLowerCase().includes(search_query) ||
					theme.desc.toLowerCase().includes(search_query)
				) {
					selezionati.push(themes_items[i]);
				}
			}
		}
	}

	const searchList = document.getElementById('searchList');

	let result = '';

	for (let i in selezionati) {
		let item = selezionati[i];

		if (item.app) {
			let selected_app = item.app;

			result += `
        <div>
          <div class="app-card" id="${selected_app.id}" onclick="window.location='community-apps.html?id=${selected_app.id}';" style="cursor: pointer;">
            <div class="app-card-container">
              <img class="app-card-image" src="${selected_app.image_url}" alt="${selected_app.name} image" loading="lazy">
              <h3 class="app-card-name">${selected_app.name}</h3>
              <p class="app-card-version">v${selected_app.version}</p>
              <p class="app-card-author">Created by <a class="app-card-author-link">${selected_app.author}</a></p>
              <p class="app-card-desc">${selected_app.desc}</p>
              <div class="app-card-buttons">
                  <a class="app-card-button bold" href="community-apps.html?id=${selected_app.id}">View</a>
              </div>
            </div>
          </div>
        </div>
        `;
		} else {
			let selected_theme = item.theme;
			result += `
              <div>
                <div class="theme-card" id="${selected_theme.id}" onclick="window.location='community-themes.html?id=${selected_theme.id}';" style="cursor: pointer;">
                  <div class="theme-card-container">
                    <img class="theme-card-image" src="${selected_theme.image_url}" alt="${selected_theme.name} image" loading="lazy">
                    <h3 class="theme-card-name">${selected_theme.name}</h3>
                    <p class="theme-card-author">Created by <a class="theme-card-author-link">${selected_theme.author}</a></p>
                    <p class="theme-card-desc">${selected_theme.desc}</p>
                    <div class="theme-card-buttons">
                        <a class="theme-card-button bold" href="community-themes.html?id=${selected_theme.id}">View</a>
                    </div>
                  </div>
                </div>
              </div>
              `;
		}
	}

	searchList.innerHTML = result;
})();