#! /bin/sh

##Sulffixe - mot après '-'

LISTA=$(ls)
echo ${LISTA[*]}
##lista com todos nomes de arquivo
##exclue todos sem '-'
##tira tudo depois do '.' dos nomes dos arquivos
##pege o que tem apos o '-', conta sua ocorrencia na lista e apaga os que ja foram contabilizados:wq

