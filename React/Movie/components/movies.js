import PropType from "prop-types";
import { Link } from "react-router-dom";

function Movies({ id, coverImg, title, summary, genres }) {
  return (
    <div>
      <img src={coverImg} />
      <h2>
        <Link to={`/movie/${id}`}>{title}</Link>
      </h2>
      <p>{summary}</p>
      <ul>
        {genres.map((g) => (
          <li key={g}>{g}</li>
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
