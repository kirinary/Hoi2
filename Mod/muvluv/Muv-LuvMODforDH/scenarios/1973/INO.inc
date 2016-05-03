
##############################
# Country definition for INO #
##############################

province = { id = 1354 ic = 1 } # パンカルピナン
province = { id = 1355 ic = 2 } # クタラジャ
province = { id = 1358 ic = 4 } # パレンバン
province =
{ id         = 1613
  anti_air   = 2
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 500
}              # バタビア
province = { id = 1629 ic = 3 } # バンドン
province = { id = 1630 ic = 2 } # チレボン
province = { id = 1631 ic = 8 } # ジョグジャカルタ
province =
{ id         = 1632
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # スラバヤ
province = { id = 1640 ic = 1 } # マカッサル
province =
{ id         = 1649
  ic         = 1
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 500
}              # バリクパパン
province = { id = 1650 ic = 3 } # バンジャルマシン
province = { id = 1651 ic = 1 } # パル
province =
{ id         = 1653
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 500
}              # マナド
province =
{ id         = 1656
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 500
}              # アンボン島
province =
{ id         = 1661
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 100
  supplypool = 500
}              # バンダールランプン
province = { id = 1665 ic = 2 } # ホランディア

#####################
# Country main data #
#####################

country =
{ tag                 = INO
  manpower            = 340
  energy              = 4000
  metal               = 3500
  rare_materials      = 5000
  oil                 = 6000
  supplies            = 3500
  money               = 500
  capital             = 1631
  regular_id          = U04
  transports          = 350
  escorts             = 150
  #nationalidentity    = "policy_identity_defensive"
  #socialpolicy        = "policy_social_militaristic"
  #nationalculture     = "policy_culture_ethnic"
  policy              = { democratic = 3 political_left = 2 freedom = 2 free_market = 2 professional_army = 9 defense_lobby = 8 interventionism = 9 }
  ownedprovinces      = { 661  1373 1612 1613 1628 1629 1630 1631 1632 1633 1634 1615 1641 1642 1645 1648 1649 1650 1762 1354 1355 1356 1357 1358 1359
                          1616 1661 1663 1640 1651 1652 1653 1635 1636 1637 1638 1639 1654 1655 1656 1657 1757 1658 1659 1660 1662 1664 1665 1673 1674
                          2111
                        }
  controlledprovinces = { 661  1373 1612 1613 1628 1629 1630 1631 1632 1633 1634 1615 1641 1642 1645 1648 1649 1650 1762 1354 1355 1356 1357 1358 1359
                          1616 1661 1663 1640 1651 1652 1653 1635 1636 1637 1638 1639 1654 1655 1656 1657 1757 1658 1659 1660 1662 1664 1665 1673 1674
                          2111
                        }
  techapps            = { 10050 1010  10150 10190 1020  10200 10210 1030    1110  1120  1130  1210  1220  1550  1560  1570  1650  1660  1850 
                          1860  1870  1950  3010  3020  3030  3110  3120  3130  3460  3470  3810  3910  3920  3930  4390  4400  4410  4480  4560 
                          50020 50030  50070 50080  5010    5020  50290 50300 5090  5100  5170  5180  5250  5330  5410  5420 
                          5430  5460  5600  5610  5620  5760  5910  5920  6010  6020  6050  6420  6430  6440  6450  7010  80080 80090 8010  80100
                          80160 8020  8030  8040  8050  8060  8070  8880  8890  8900  8910  8920  9010  9020  9030  9040  9050  9190  9200  9340 
                          9350  9360  9370  9380  9520  9530  9670  9680  9690  9700  9840 
                        }
  nationalprovinces   = { 661  1373 1612 1613 1628 1629 1630 1631 1632 1633 1634 1615 1641 1642 1645 1648 1649 1650 1762 1354 1355 1356 1357 1358 1359
                          1616 1661 1663 1640 1651 1652 1653 1635 1636 1637 1638 1639 1654 1655 1656 1657 1757 1658 1659 1660 1662 1664 1665 1673 1674
                          2111 1666 1667 1672 1675 1677 1678 1679 1680 1681
                        }
}
