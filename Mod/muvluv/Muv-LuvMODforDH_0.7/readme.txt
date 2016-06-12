■編集ファイルや概要
全体的にブラゴエスチェンスクに統一

db\events_MUV-LUV\BETA-ハイヴ陥落
db\events_MUV-LUV\BETA-ハイヴ建設
db\events_MUV-LUV\BETA奇襲強襲
db\events_MUV-LUV\BETA補充
db\events_MUV-LUV\ソ連フレーバー
db\events_MUV-LUV\ソ連フレーバー1998
scenario\1973\vp.inc
scenario\1973\SOV.inc
scenario\1990\vp.inc
scenario\1990\SOV.inc
scenario\1990\U02.inc
scenario\1990\U19.inc
scenario\1990\U30.inc
scenario\1990\U06.inc
scenario\1990\USA.inc
scenario\1998L\vp.inc
scenario\1998L\U02.inc
scenario\1998L\U19.inc
scenario\1998L\U30.inc
scenario\european\U12.inc
scenario\european\U19.inc
scenario\european\vp.inc
map\map_2\province_name


■編集箇所（
・BETA-ハイヴ陥落
ブラゴエスチェンスクハイヴの陥落
id = 38019
	(-)province  = 1528
	(-)where = 1528
	(+)province  = 1525
	(+)where = 1525

・BETA-ハイヴ建設
ロヴァニエミハイヴの建設
id = 37007
	(-)where = 136
	(-)value = 136
	(+)where = 130
	(+)value = 130

id = 37076
	(-)where = 136
	(+)where = 130
	
	
・province_name
ブラゴヴェシチェンスク→ブラゴエスチェンスク
ブラゴエスチェンスク→ビロビジャン

・BETA奇襲強襲
id = 40008
	(-)land_combat = 1528
	(-)where = 1528
	(+)land_combat = 1525
	(+)where = 1525
	
・BETA補充
id = 1409
	(-)where = 136
	(+)where = 130

id = 1419
	(-)where = 1528
	(+)where = 1525
	
・scenarioファイル
コメント　カヤーニ→ロヴァニエミ
コメント　ブラゴエスチェンスクに統一
プロビ関連　136→130

ロヴァニエミハイヴがロヴァニエミにできることにより、
1990年シナリオでロヴァニエミに配置されるユニットが死んでしまうので、ルーレオ(PROV127)に変更



■免責
※このファイルを使って生ずるいかなる損害に対して一切責任を持ちません。
author:kirina