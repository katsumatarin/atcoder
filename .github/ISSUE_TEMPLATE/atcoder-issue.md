---
name: Atcoder issue
about: Atcoderのissueをたてるためのテンプレート
title: 問題を解く
labels: ''
assignees: katsumatarin

---

# 問題URL
<!-- ここにAtcoderの問題URLを貼り付ける -->

# TODO (上から下に順番に処理する)
- [x] issue作成, 自分のassign, 進捗管理ボードにのせる
- [ ] 問題を解くファイル(なければディレクトリも)を作成する。abc045のA問題の場合、`atcoder/abc045/a.cpp`
- [ ] `oj d {url}`で問題をダウンロード
- [ ] 問題を解き、コンパイルして`oj t`でテスト
- [ ] `oj s {url} {提出する.cppのファイル名}`でAtcoderに提出する。
- [ ] commit, pushする(違うコマンドを使えと怒られたらそのコマンドを打つ)
- [ ] 次に解く問題を[AtCoder Scores](https://atcoder-scores.herokuapp.com/?user=potekuma)から決めてissueを作成する

# その他
## ローカルのブランチ一覧と自分が今いるブランチの確認コマンド
`git branch`

## ブランチを移動するコマンド
`git checkout ブランチ名`

## 新しくブランチを作るコマンド(実行後に新しいブランチに勝手に移動する。)
`git checkout -b ブランチ名`

## ブランチを削除するコマンド
`git branch --delete ブランチ名`

## コミット履歴を確認するコマンド
`git log`

## C++のコンパイル
ctrl + option + n (`g++ hoge.c` を裏で実行している)

## online judge tools
テストケースダウンロード`oj d {url}`
テスト実行`oj t`
提出`oj s {url} b.cpp`
[online-judge-toolsのリポジトリ](https://github.com/online-judge-tools/oj/blob/master/docs/getting-started.ja.md)を参考にすること
