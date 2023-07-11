elemNum :: Int -> [Int] -> Int
elemNum a [] = 0
elemNum a (x:xs)
  |a == x = 1 + elemNum a xs
  |otherwise = elemNum a xs
  -- retorna o numero de vezes q um numero aparece(q2)