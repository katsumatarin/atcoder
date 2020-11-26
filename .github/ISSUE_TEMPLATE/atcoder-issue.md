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
- [x] issue作成
- [x] katsumatarinをassignし、進捗管理ボードにのせる
- [ ] VS Codeで作業する
  - [ ] 問題を解くファイル(なければディレクトリも)を作成する。abc045のA問題の場合、`atcoder/abc045/a.go`
  - [ ] 問題を解いて Atcoder に提出する。
  - [ ] VS Codeを使ってコミットする。
  - [ ] `git push`のコマンドでpushする(違うコマンドを使えと怒られたらそのコマンドを打つ)

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
