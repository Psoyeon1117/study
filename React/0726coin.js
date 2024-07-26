import { useState, useEffect } from "react";

function App() {
  const [loading, setLoading] = useState(true);
  const [coins, setCoins] = useState([]);
  const [money, setMoney] = useState(0);
  const [yourcoin, setYourcoin] = useState(0);

  useEffect(() => {
    fetch("https://api.coinpaprika.com/v1/tickers") //fetch는 URL로부터 데이터를 받아와 promise객체를 반환함
      .then((response) => response.json())  //데이터를 받아왔다면 데이터를 json형식으로 변경
      .then((json) => {
        setCoins(json);
        setLoading(false);
      });
  }, []);
  //URL로부터 한 번 데이터를 불러온다.
  const coinChange = (e) => {
    setYourcoin(Math.floor(money / e.target.value));  //현재 돈으로 구매할 수 있는 코인의 수를 갱신함
  };
  const moneyChange = (e) => {
    setMoney(e.target.value);
  };
  return (
    <div>
      <h1>Coins ({coins.length})</h1>
      <h2>your coins: {yourcoin}</h2>
      {loading ? (
        <strong>Loading</strong>
      ) : (
        <div>
          <input
            type="number"
            placeholder="write your money"
            onChange={moneyChange}
            value={money}
          ></input>
          <select onChange={coinChange}>
            {coins.map((coin) => (
              <option key={coin.id} value={coin.quotes.USD.price}>
                {coin.name} ({coin.symbol}) ${coin.quotes.USD.price}USD
              </option>
            ))}
          </select>
        </div>
      )}
    </div>
  );
}

export default App;
