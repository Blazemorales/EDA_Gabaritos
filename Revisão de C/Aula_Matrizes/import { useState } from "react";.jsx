import { useState } from "react";

export default function App() {
  const [contador, setContador] = useState(0);

  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h1>Contador Simples</h1>
      <h2>{contador}</h2>
      <button onClick={() => setContador(contador + 1)}>➕ Incrementar</button>
      <button onClick={() => setContador(contador - 1)}>➖ Decrementar</button>
      <button onClick={() => setContador(0)}>🔄 Resetar</button>
    </div>
  );
}
