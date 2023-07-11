power :: Int -> Int -> Int
power x y = if y == 0 then 1 else power x (y - 1) * x
--potencia(q1)