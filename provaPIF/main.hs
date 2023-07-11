--potencia(q1)
newpow :: Int -> Int -> Int
newpow x y = if y == 0 then 1 else newpow x (y - 1) * x
--somatoreo
mysum :: [Int] -> Int
mysum [] = 0
mysum (x:xs) = x + mysum xs

--checar se tem um elemento na listArray
myElement::Int->[Int]->Bool
myElement x [] = False
myElement x (y:ys) = (x == y) || (myElement x ys)

-- retorna o numero de vezes q um numero aparece(q2)
elemNum :: Int -> [Int] -> Int
elemNum a [] = 0
elemNum a (x:xs)
  |a == x = 1 + elemNum a xs
  |otherwise = elemNum a xs
  
--somatorio de 1 ate x
som :: Int -> Int
som 1 = 1
som x = x + som(x-1)

--printa elementos * 2 de um array
doubleAll_2 :: [Int]->[Int]
doubleAll_2 [] = []
doubleAll_2 (x:xs) = 2*x : doubleAll_2 xs

--recebe uma string e filtra deixando apenas digitos
digits :: String -> String
digits [] = []
digits (x:xs)
  | x >= '0' && x <= '9' = x : digits xs
  | otherwise = digits xs

--checa se e palindromo(q4)
palinDromo :: String -> Bool
palinDromo str = checkPalindrome str 0 (length str - 1)
  where
    checkPalindrome str start end
      | start >= end = True
      | str !! start /= str !! end = False
      | otherwise = checkPalindrome str (start + 1) (end - 1)
