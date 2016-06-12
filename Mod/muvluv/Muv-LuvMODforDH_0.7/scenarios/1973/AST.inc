
##############################
# Country definition for AST #
##############################

province =
{ id       = 1666
  ic       = 1
  air_base = { size = 1 current_size = 1 }
  anti_air = 1
}            # ラエ
province =
{ id         = 1670
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 2 current_size = 2 }
}              # ココポ
province =
{ id         = 1677
  ic         = 3
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  anti_air   = 1
  oilpool    = 50
  supplypool = 50
}              # ポートモレスビー
province = { id = 1696 anti_air = 2 coastalfort = 1 ic = 5 } # タウンズビル
province =
{ id         = 1703
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
  ic         = 1
}              # ダーウィン
province =
{ id          = 1711
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 1
}               # パース
province =
{ id         = 1715
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  ic         = 7
}              # ニューキャッスル
province = { id = 1718 anti_air = 2 ic = 3 } # アデレード
province =
{ id          = 1722
  anti_air    = 2
  naval_base  = { size = 2 current_size = 2 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 1
  ic          = 6
}               # ブリスベン
province =
{ id          = 1723
  anti_air    = 3
  naval_base  = { size = 6 current_size = 6 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 2
  ic          = 8
}               # シドニー
province =
{ id          = 1727
  anti_air    = 2
  coastalfort = 1
  air_base    = { size = 2 current_size = 2 }
  naval_base  = { size = 4 current_size = 4 }
  ic          = 9
}               # キャンベラ
province =
{ id          = 1730
  anti_air    = 2
  coastalfort = 1
  naval_base  = { size = 4 current_size = 4 }
  air_base    = { size = 4 current_size = 4 }
  ic          = 5
}               # メルボルン

#####################
# Country main data #
#####################

country =
{ tag                 = AST
  manpower            = 340
  energy              = 3500
  metal               = 5800
  rare_materials      = 3400
  oil                 = 6000
  supplies            = 8000
  money               = 400
  capital             = 1727
  transports          = 500
  escorts             = 300
  ##nationalidentity    = "policy_identity_guardians"
  ##socialpolicy        = "policy_social_enterprise"
  ##nationalculture     = "policy_culture_libertarian"
  nationalprovinces   = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729
                        }
  ownedprovinces      = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  controlledprovinces = { 1703 1704 1706 1707 1708 1709 1710 1711 1712 1713 1715 1716 1717 1718 1719 1722 1723 1724 1725 1727 1730 1732 1733 1693 1696
                          1697 1698 1700 1702 1729 1666 1667 1672 1675 1677 1678 1679 1680 1681 1668 1669 1670 1671 1682 2238 2234
                        }
  techapps            = { 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50120 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000 2000  2210  3000  4000  5000
                        }
  policy              = { democratic = 9 political_left = 2 freedom = 8 free_market = 8 professional_army = 7 defense_lobby = 7 interventionism = 6 }
}
