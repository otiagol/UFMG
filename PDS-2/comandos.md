'~' -> atalho que significa "A minha pasta pessoal"
'mkdir'-> vem de make directory (criar diretório)
'-p' -> crie qualquer outra pasta no caminho 
'cp' -> copy
'-r' -> pegue tudo 
cd -> mudar diretorio 
.. -> pasta de traz 

git init (Início): Ao rodar isso dentro da pasta PDS-2, você liga o "radar" do Git. Ele cria uma pastinha oculta e começa a vigiar qualquer alteração de código que você fizer ali dentro.

git add . (Preparação): O ponto . significa "tudo". Aqui você está pegando todos os arquivos novos ou modificados e colocando-os em uma "caixa" (chamada staging area). É como dizer: "Git, olhe para essas alterações aqui, vou querer salvá-las".

git commit -m "sua mensagem" (O Save): Esse é o checkpoint oficial no seu computador. Você fecha a caixa que preparou com o add, cola uma etiqueta nela (a mensagem entre aspas) e guarda no histórico. Se seu código quebrar semana que vem, você pode "voltar no tempo" exatamente para esse commit.

git pull (Puxar): Esse é o comando que você vai usar no dia a dia. Se você codou no PC à tarde (fez um push), quando abrir o notebook à noite, basta dar um git pull. Ele vai até a nuvem, vê o que mudou e atualiza a sua pasta local automaticamente.
