import PropType from "prop-types";
import { Link } from "react-router-dom";
import style from "./movies.module.css"

function Movies({ id, coverImg, title, summary, genres }) {
  return (
    <div className={style.div}>
      <img src={coverImg} />
      <h2>
        <Link to={`/movie/${id}`} className={style.link} >{title}</Link>
      </h2>
      <p className={style.p}>{summary.length > 150 ? `${summary.slice(0,150)}...`:summary}</p>
      <ul className={style.ul}>
        {genres.map((g) => (
          <li key={g} className={style.li}>{g}</li>
        ))}
      </ul>
    </div>
  );
}
Movies.PropType = {
  coverImg: PropType.string.isRequired,
  titel: PropType.string.isRequired,
  summary: PropType.string,
  genres: PropType.arrayOf(PropType.string),
};
export default Movies;
