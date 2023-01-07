import System.IO

main :: IO ()
main = do
  input <- getLine
  let n = read input :: Int
  mapM_ (\i -> putStrLn $  show i ++ " Abracadabra") [1..n]
