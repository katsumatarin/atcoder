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
  - [x] atcoderを開き、masterブランチに移動
  - [x] リモートの変更があれば取り込むため`git pull`を行う。
  - [ ] ブランチ名を決めてdevelopブランチから新しいブランチを作って移動。
  - [ ] 問題を解くファイル(なければディレクトリも)を作成する。abc045のA問題の場合、`atcoder/abc045/a.go`
  - [ ] 問題を解いて Atcoder に提出する。
  - [ ] VS Codeを使ってコミットする。
  - [ ] `git push`のコマンドでpushする(違うコマンドを使えと怒られたらそのコマンドを打つ)
- [ ] Githubで作業を行う
  - [ ] githubのatcoderリポジトリでcreate pull requestする
  - [ ] assigneeとreviewerにmiyajiroを設定
  - [ ] レビューが通った後で merge pull request を押してマージする
- [ ] VS Codeに戻り、masterブランチに移動して`git pull`し、マージされた変更がmasterに反映されたことを確認する。

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