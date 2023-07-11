palinDromo :: String -> Bool
palinDromo str = checkPalindrome str 0 (length str - 1)
  where
    checkPalindrome [] x y = True
    checkPalindrome x start end
      | start >= end = True
      | (str !! start) /= (str !! end) = False
      | otherwise = checkPalindrome str (start + 1) (end - 1)

--checa se e palindromo(q4)
