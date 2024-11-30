
const countryList=[
	{
		name: "Korea",
		capital: "Seoul",
		languages: "Korean",
	},
	{
		name: "America",
		capital: "Washington, D.C.",
		languages: "English",
	},
	{
		name: "China",
		capital: "Beijing",
		languages: "Chinese",
	},
];
export const home = (req, res) => res.render("home");
export const country = (req, res) => res.render("country", {countryList});
//req = 클라이언트의 request에 대한 정보가 담겨있다.
//res = 서버가 클라이언트에게 response할 정보가 담겨있다.
//res.render(view, [locals], callback) view를 랜더링해준다.
// locals에는 view에서 랜더링할 때 사용하는 정보들이 있다.