/** @format */

// ---- MAIN ----

let mybutton = document.getElementById('scroll-to-top');

window.onscroll = function () {
	scrollFunction();
};

function scrollFunction() {
	if (
		document.body.scrollTop > 600 ||
		document.documentElement.scrollTop > 600
	) {
		mybutton.style.display = 'block';
	} else {
		mybutton.style.display = 'none';
	}
}

function topFunction() {
	document.body.scrollTop = 0;
	document.documentElement.scrollTop = 0;
}

function openExternalLink(link) {
	RainmeterAPI.Bang(`${link}`)
}
