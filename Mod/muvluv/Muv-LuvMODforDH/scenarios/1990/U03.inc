
##############################
# Country definition for U03 #
##############################

province =
{ id         = 404
  ic         = 10
  air_base   = { size = 5 current_size = 5 }
  naval_base = { size = 6 current_size = 6 }
}              # ハイファ
province =
{ id       = 406
  air_base = { size = 5 current_size = 5 }
}            # ベエルシェバ
province = { id = 1794 ic = 2 } # ベイルート
province = { id = 1798 ic = 4 } # テルアビブ
province =
{ id       = 1803
  ic       = 2
  air_base = { size = 6 current_size = 6 }
}            # カラク
province =
{ id         = 1804
  ic         = 2
  naval_base = { size = 6 current_size = 6 }
}              # メディナ
province =
{ id       = 1809
  ic       = 2
  air_base = { size = 6 current_size = 6 }
}            # メッカ(マッカ・アル＝ムカッラマ)
province =
{ id         = 1812
  ic         = 3
  naval_base = { size = 6 current_size = 6 }
}              # サナー
province = { id = 1813 ic = 3 } # アデン
province = { id = 1815 ic = 1 } # ハディブ(ソコトラ島)
province =
{ id         = 1819
  ic         = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}              # マスカット
province = { id = 1821 ic = 2 } # ダンマン
province = { id = 1881 ic = 3 } # ナザレ
province =
{ id         = 1906
  ic         = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}              # マナーマ
province =
{ id       = 2460
  air_base = { size = 5 current_size = 5 }
}            # ハサブ

#####################
# Country main data #
#####################

country =
{ tag                 = U03
  manpower            = 420
  energy              = 12000
  metal               = 18000
  rare_materials      = 15000
  oil                 = 50000
  supplies            = 80000
  money               = 1800
  capital             = 1906
  regular_id          = U06
  transports          = 400
  escorts             = 300
  nationalprovinces   = { 1862 1863 1792 1861 1796 1802 407  1803 1882 1159 1795 2019 1794 1793 1864 1865 1866 1790 1824 1823 1806 1791 710  1860 2496
                          1498 1822 700  1906 404  406  1797 1798 1881 1821 1818 1809 1808 1807 1805 1804 1504 1819 2460 1812 1813 1814 1815 409  408 
                          437  438  439  441  442  443  448  440  449  447  446  445  450  1851 1852 1853 1854 1855 2322 1158 1859
                          1787 1503 1502 1788 1789 1825 1497 1499 1826 1501 1500 1496 1495
                        }
  ownedprovinces      = { 1862 1863 1792 1861 1796 1802 407  1803 1882 1159 2019 1794 1793 1865 1866 1790 1824 1823 1806 1791 710  1860 2496 1498
                          1822 700  1906 1821 1818 1809 1808 1807 1805 1804 1504 1819 2460 1812 1813 1814 1815 409  408  437 
                          438  439  441  442  443  448  440  449  447  446  445  450  1851 1852 1853 1854 1855 2322 1158 1859 1787
                          1503 1502 1788 1789 1825 1497 1499 1826 1501 1496 1495
                        }
  controlledprovinces = { 1504 1794 1796 1802 1803 1804 1805 1807 1808 1809 1812 1813 1814 1815 1818 1819 1821 1882 1906 2460
                          700  1822  1823
                        }
  techapps            = { 10050 10060 10070 1010  10150 10190 1020  10200 10210 1030  1040  10490 1110  1120  1130  1210  1220  1230  1530  1550 
                          1560  1570  1580  1650  1660  1670  1750  1760  1850  1860  1950  2010  2020  20210 2030  20310 20410 2610  2910  3010 
                          3020  3030  3110  3120  3130  3210  3220  3460  3470  3480  3810  3820  3830  3910  3920  3940  40100 4390  4400  4410 
                          4420  4480  4490  4560  4570  50020 50030 50040 50070 50080 50090 5010  50100 50110 50120 5020  50290 5030  50300 50310
                          5090  5100  5110  5170  5180  5190  5250  5260  5330  5340  5410  5420  5430  5460  5490  5600  5610  5620  5910  5920 
                          5930  7010  80080 80090 8010  8020  8030  8040  8050  8060  8070  8880 
                          8890  8900  8910  8920  9010  9020  9030  9040  9050  9060  9190  9200  9210  9220  9340  9350  9360  9370  9380  9390 
                          9520  9670  9680  9690  9700  9710  9840  9850  9860  10390 4010 4020   4030  4040  4050  4110 4120
                          4130  4140  4150  4210  4220  4230  4240  4250  2040  2050  2060
                          4640  4650  4660  4670  4680  4820  4830  4840  4850  4860  40000 40010 40020 40030 40040
                          6050  6060  6070  6080  6090  6240  6250  6490  6500  6510
                        }
  inventions          = { }
  policy              = { democratic = 3 political_left = 2 freedom = 3 free_market = 2 professional_army = 9 defense_lobby = 8 interventionism = 8 }
  landunit =
  { id       = { type = 25501 id = 1 }
    name     = "第366機甲師団"
    location = 1822
    home     = 1822
    division =
    { id            = { type = 25501 id = 2 }
      name          = "第1戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 3 }
      name          = "第2戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4 }
      name          = "第3戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 5 }
      name          = "第1戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 6 }
      name          = "第2戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 7 }
      name          = "第3戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 8 }
    name     = "第162機甲師団"
    location = 1822
    home     = 1822
    division =
    { id            = { type = 25501 id = 9 }
      name          = "第4戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 10 }
      name          = "第5戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 11 }
      name          = "第6戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 12 }
      name          = "第4戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 13 }
      name          = "第5戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 14 }
      name          = "第6戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 15 }
    name     = "第一軍団司令部"
    location = 1823
    home     = 1823
    division =
    { id            = { type = 25501 id = 16 }
      name          = "第一軍団司令部"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 17 }
    name     = "第二軍団司令部"
    location = 1822
    home     = 1822
    division =
    { id            = { type = 25501 id = 18 }
      name          = "第二軍団司令部"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 19 }
    name     = "第36機甲師団"
    location = 1823
    home     = 1823
    division =
    { id            = { type = 25501 id = 20 }
      name          = "第7戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 21 }
      name          = "第8戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 22 }
      name          = "第9戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 23 }
      name          = "第7戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 24 }
      name          = "第8戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 25 }
      name          = "第9戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 26 }
    name     = "第460機甲師団"
    location = 1808
    home     = 1808
    division =
    { id            = { type = 25501 id = 27 }
      name          = "第10戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 28 }
      name          = "第11戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 29 }
      name          = "第12戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 30 }
      name          = "第10戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 31 }
      name          = "第11戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 32 }
      name          = "第12戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 33 }
    name     = "第401機甲師団"
    location = 1796
    home     = 1796
    division =
    { id            = { type = 25501 id = 34 }
      name          = "第13戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 35 }
      name          = "第14戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 36 }
      name          = "第15戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 37 }
      name          = "第13戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 38 }
      name          = "第14戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 39 }
      name          = "第15戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 40 }
    name     = "第84機甲師団"
    location = 1882
    home     = 1882
    division =
    { id            = { type = 25501 id = 41 }
      name          = "第16戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 42 }
      name          = "第17戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 43 }
      name          = "第18戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 44 }
      name          = "第16戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 45 }
      name          = "第17戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 46 }
      name          = "第18戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 47 }
    name     = "第12戦術機甲師団"
    location = 1794
    home     = 1794
    division =
    { id            = { type = 25501 id = 48 }
      name          = "第19戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 49 }
      name          = "第20戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 50 }
      name          = "第21戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 51 }
      name          = "第19戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 52 }
      name          = "第20戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 53 }
      name          = "第21戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 54 }
    name     = "第5戦術機甲師団"
    location = 1882
    home     = 1882
    division =
    { id            = { type = 25501 id = 55 }
      name          = "第22戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 56 }
      name          = "第23戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 57 }
      name          = "第24戦術機甲大隊"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 58 }
      name          = "第22戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 59 }
      name          = "第23戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 60 }
      name          = "第24戦車大隊"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4511 }
    name     = "第一艦隊"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4513 }
      name     = "アル・リヤド"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4514 }
      name     = "メッカ"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4515 }
      name     = "バドル"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4516 }
      name     = "アル・ヤルムーク"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4517 }
      name     = "ヒッティーン"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4518 }
      name     = "タブーク"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4519 }
      name     = "アブ・ダビ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4520 }
      name     = "アル・エミラート"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4521 }
      name     = "バイヌナ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4522 }
      name     = "バブル"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4523 }
      name     = "パラング"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4524 }
    name     = "第二艦隊"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4526 }
      name     = "アル・ダンマン"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4527 }
      name     = "アル・マディーナ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4528 }
      name     = "フフーフ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4529 }
      name     = "サーム"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4530 }
      name     = "ザール"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4531 }
      name     = "ラスタン"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4532 }
      name     = "ファラマーズ"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4533 }
      name     = "カヒル・アル・アムワジ"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4534 }
      name     = " 	アル・ムアッサー"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4535 }
    name     = "第三艦隊"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4537 }
      name     = "アブハー"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4538 }
      name     = "ターイフ"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4539 }
      name     = "ムアヴェネト"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4540 }
      name     = "アダテペ"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4541 }
      name     = "コジャテペ"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4542 }
      name     = "ザフェル"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4543 }
      name     = "トラキヤ"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4544 }
      name     = "カラデニズ"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4545 }
      name     = "エゲ"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4546 }
      name     = "アクデニズ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4547 }
      name     = "ガーズィアンテプ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4548 }
      name     = "ギレスン"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4549 }
      name     = "ゲムリク"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4555 }
    name     = "第一輸送艦隊"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4557 }
      name     = "ゲリボル"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4558 }
      name     = "第1輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4559 }
      name     = "第2輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4560 }
      name     = "第3輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4561 }
    name     = "第二輸送艦隊"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4563 }
      name     = "ゲディズ"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4564 }
      name     = "第4輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4565 }
      name     = "第5輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4566 }
      name     = "第6輸送グループ"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
