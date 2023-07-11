digits :: String -> String
digits [] = []
digits (x:xs)
  | x >= '0' && x <= '9' = x : digits xs
  | otherwise = digits xs
--recebe uma string e filtra deixando apenas digitos
