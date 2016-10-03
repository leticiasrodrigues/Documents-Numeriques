#! /bin/sh

fact ()
{
  echo donnee:"$1"
  if [ "$1" -eq 1 ]
  then
    echo 1
  else
    m=$(expr "$1" - 1)
    expr "$1" \* $(fact "$m")
  fi    
  echo m:"$m"

}
fact 3
