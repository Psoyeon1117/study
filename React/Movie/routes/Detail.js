import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
import style from "./Detail.module.css"

function Detail() {
  const { id } = useParams();
  const [movie, setMovie] = useState();
  const [loading, setLoading] = useState(true);

  const getMovie = async () => {
    const json = await (
      await fetch(`https://yts.mx/api/v2/movie_details.json?movie_id=${id}`)
    ).json();
    setMovie(json.data.movie);
    setLoading(false);
  };
  useEffect(() => {
    getMovie();
  }, []);
  return (
    <div>
      {loading ? (
        <h1>Loading</h1>
      ) : (
        <div className={style.main}>
          <div>
          <img src={movie.medium_cover_image} className={style.img}/>
          </div>
          <div className={style.info}>
          <h1>{movie.title}</h1>
          <ul className={style.ul}>
            <li className={style.main_li}>Rating: {movie.rating}</li>
            <li className={style.main_li}>Runtime: {movie.runtime}</li>
            <li className={style.main_li}>Year: {movie.year}</li>
          </ul>
          <div>{movie.description_intro}</div>
          <ul className={style.ul}>
            {movie.genres.map((g) => (
              <li key={g} className={style.g_li}>{g}</li>
            ))}
          </ul>
          </div>
        </div>
      )}
    </div>
  );
}

export default Detail;
