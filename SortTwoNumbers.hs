main :: IO ()
main = do
  -- Read the input string from the console
  input <- getLine
  
  -- Parse the two integers from the input string
  let [XX, YY] = map read (words input)
  
  if XX > YY
   then putStrLn (show XX ++ " " ++ show YY)
   else putStrLn (show YY ++ " " ++ show XX)
