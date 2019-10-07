# (連結)リスト

# 進め方
## はじめてのとき
* [GitHub](https://github.com/)のアカウントを作成してください
* [Travis CI](https://travis-ci.com/) のアカウントを作成してください
* GitHubのアカウントを[こちらのフォーム](https://goo.gl/forms/anAdoxqPKVt8sJGZ2)から教えてください。
## 毎回の進め方
* このリポジトリをforkしてください
* Travis CI を設定して、自動ビルドが通るようにしてください
   * Travis CI のGitHubアカウントでの登録とforkしたリポジトリをTravisCI側で許可する
   * 参考サイト：[Travis CIで自動テストして、結果をGitHubのトップページに表示する](https://qiita.com/hoshimado/items/4090d8e64beb8a7f95e1)
* forkしたリポジトリの README.md ファイルの「t-kougei-game-comp」の部分を自分のGitHubアカウント名に差し替えてください(2箇所)
* 問題を解いて、テストを通るようにしてください。
* fork 元の master ブランチにプルリクエストを投げてください

# テスト結果

[![Build Status](https://travis-ci.com/Kuryu86/03_list.svg?branch=master)](https://travis-ci.com/Kuryu86/03_list)

# 今回の問題

連結リストの勉強です。

入力される文字をリストに順次格納して、取り出すように指示されたら、先頭の要素を削除して、その際に削除したデータの値を出力してください。

格納したときや削除の際に、リストの要素を動的に確保・解放すると高評価です。

input?.txt ファイルを標準入力として読み込んで、標準出力の結果を output?.txt ファイルと一致するか比較するテストをします。

main.c ファイルだけを書き換えて下さい。

## 入力される値
入力は以下のフォーマットで与えられます。
~~~
n
n
n
n
~~~

nの値に応じて、処理を変えてください。
* 0: 現在のリストに格納されている全てのデータを「,」で区切って表示する
* -1: リストの先頭のデータを削除する。削除する際に、データの値を出力する
* それ以外: リストの先頭にデータを追加する

## 期待する出力

削除された際に、削除されたデータの値を表示するか、0が入力された際に、その時点のリストを表示します。

最後は改行し、余計な文字、空行を含んではいけません。

## 条件
すべてのテストケースで以下の条件を満たします。
* -1 <= n <= 100
* テストデータの行数は100行を超えることはありません

## 入力例1
~~~
1
-1
~~~
* 1行目の数字は正で、リストの先頭にデータが格納されることを期待します
* 2行目の値は「-1」なので、リストの先頭は削除され、削除された際のデータを出力します。

## 出力例1
~~~
1
~~~

## 入力例2
~~~
2
1
0
-1
0
~~~

## 出力例2
~~~
1,2
1
2
~~~
