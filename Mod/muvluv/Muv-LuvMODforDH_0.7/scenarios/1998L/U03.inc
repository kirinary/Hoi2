
##############################
# Country definition for U03 #
##############################

province =
{ id         = 404
  ic         = 10
  air_base   = { size = 5 current_size = 5 }
  naval_base = { size = 6 current_size = 6 }
}              # �n�C�t�@
province =
{ id       = 406
  air_base = { size = 5 current_size = 5 }
}            # �x�G���V�F�o
province = { id = 1794 ic = 2 } # �x�C���[�g
province = { id = 1798 ic = 4 } # �e���A�r�u
province =
{ id       = 1803
  ic       = 2
  air_base = { size = 6 current_size = 6 }
}            # �J���N
province =
{ id         = 1804
  ic         = 2
  naval_base = { size = 6 current_size = 6 }
}              # ���f�B�i
province =
{ id       = 1809
  ic       = 2
  air_base = { size = 6 current_size = 6 }
}            # ���b�J(�}�b�J�E�A�������J�b���})
province =
{ id         = 1812
  ic         = 3
  naval_base = { size = 6 current_size = 6 }
}              # �T�i�[
province = { id = 1813 ic = 3 } # �A�f��
province = { id = 1815 ic = 1 } # �n�f�B�u(�\�R�g����)
province =
{ id         = 1819
  ic         = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}              # �}�X�J�b�g
province = { id = 1821 ic = 2 } # �_���}��
province = { id = 1881 ic = 3 } # �i�U��
province =
{ id         = 1906
  ic         = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}              # �}�i�[�}
province =
{ id       = 2460
  air_base = { size = 5 current_size = 5 }
}            # �n�T�u

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
  capital             = 404
  regular_id          = U06
  transports          = 400
  escorts             = 300
  nationalprovinces   = { 1862 1863 1792 1861 1796 1802 407  1803 1882 1159 1795 2019 1794 1793 1864 1865 1866 1790 1824 1823 1806 1791 710  1860 2496
                          1498 1822 700  1906 404  406  1797 1798 1881 1821 1818 1809 1808 1807 1805 1804 1504 1819 2460 1812 1813 1814 1815 409  408 
                          437  438  439  441  442  443  448  440  449  447  446  445  450  1851 1852 1853 1854 1855 2322 1158 1486 1493 1492 1484 1859
                          1787 1503 1502 1788 1789 1825 1497 1499 1826 1501 1500 1496 1495 1487
                        }
  ownedprovinces      = { 1862 1863 1792 1861 1796 1802 407  1803 1882 1159 1795 2019 1794 1793 1865 1866 1790 1824 1823 1806 1791 710  1860 2496 1498
                          1822 700  1906 404  406  1797 1798 1881 1821 1818 1809 1808 1807 1805 1804 1504 1819 2460 1812 1813 1814 1815 409  408  437 
                          438  439  441  442  443  448  440  449  447  446  445  450  1851 1852 1853 1854 1855 2322 1158 1486 1493 1492 1484 1859 1787
                          1503 1502 1788 1789 1825 1497 1499 1826 1501 1496 1495 1487
                        }
  controlledprovinces = { 1815 1906 }
  techapps            = { 10050 10060 10070 10080 10090 1010  10150 10160 10190 1020  10200 10210 10220 1030  1040  10490 1050  1110  1120  1130 
                          1140  1150  1210  1220  1230  1240  1250  1470  1490  1510  1530  1550  1560  1570  1580  1590  1650  1660  1670  1680 
                          1690  1750  1760  1770  1780  1790  1850  1860  1870  1950  1960  1970  1980  2010  2020  20210 2030  20310 2040  20410
                          2050  20510 2060  2070  2080  2310  2320  2330  2610  2620  2630  2640  2650  2660  2910  2920  2930  2940  2950  2960 
                          3010  3020  3030  3040  30410 30420 30430 3050  30510 30520 3110  3120  3130  3140  3150  3210  3220  3230  3240  3250 
                          3310  3320  3330  3340  3350  3410  3460  3470  3480  3490  3500  3560  3570  3610  3620  3630  3640  3650  3710  3720 
                          3730  3740  3750  3810  3820  3830  3840  3850  3910  3920  3930  3940  3950  3960  40100 40110 40120 40130 40200 40210
                          40220 4390  4400  4410  4420  4430  4480  4490  4500  4510  4560  4570  4580  50020 50030 50040 50050 50070 50080 50090
                          5010  50100 50110 50120 5020  50290 5030  50300 50310 5040  5090  5100  5110  5120  5170  5180  5190  5200  5250  5260 
                          5270  5280  5330  5340  5350  5360  5370  5410  5420  5430  5460  5490  5500  5600  5610  5620  5630  5680  5690  5760 
                          5770  5780  5790  5800  5810  5820  5910  5920  5930  5940  5950  6010  6030  6060  6740  6750  6760  6770  6780  6790 
                          7010  7500  7510  7520  7670  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310 
                          8320  8330  9010  90140 90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390 
                          9400  9520  9530  9540  9550  9560  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990 
                        }
  inventions          = { }
  policy              = { democratic = 3 political_left = 2 freedom = 3 free_market = 2 professional_army = 9 defense_lobby = 8 interventionism = 8 }
  landunit =
  { id       = { type = 25501 id = 4440 }
    name     = "��1�R�c"
    location = 1815
    home     = 1815
    mission  = { type = none target = 1815 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4442 }
      name          = "��1�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4443 }
    name     = "��2�R�c"
    location = 1906
    home     = 1906
    mission  = { type = none target = 1906 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4445 }
      name          = "��2�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4446 }
    name     = "��3�R�c"
    location = 1906
    home     = 1906
    mission  = { type = none target = 1819 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4448 }
      name          = "��3�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4449 }
    name     = "��4�R�c"
    location = 1815
    home     = 1815
    mission  = { type = none target = 1807 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4451 }
      name          = "��4�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4452 }
    name     = "��5�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 404 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4454 }
      name          = "��5�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4455 }
      name          = "��6�x������"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4456 }
    name     = "��6�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 404 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4458 }
      name          = "��1�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4459 }
      name          = "��2�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4460 }
      name          = "��1���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4461 }
    name     = "��7�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 1821 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4463 }
      name          = "��1��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4464 }
      name          = "��1�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4465 }
      name          = "��2���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4466 }
    name     = "��8�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 1808 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4468 }
      name          = "��2��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4469 }
      name          = "��3��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4470 }
      name          = "��2�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4471 }
      name          = "��3���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4472 }
    name     = "��9�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 1796 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4474 }
      name          = "��4��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4475 }
      name          = "��5��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4476 }
      name          = "��3�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4477 }
    name     = "��10�R�c"
    location = 901
    home     = 901
    mission  = { type = none target = 1882 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4479 }
      name          = "��6��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4480 }
      name          = "��4�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4481 }
      name          = "��4���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4482 }
    name     = "��11�R�c"
    location = 900
    home     = 900
    mission  = { type = none target = 1795 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4484 }
      name          = "��7��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4485 }
      name          = "��8��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4486 }
      name          = "��5�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4487 }
      name          = "��5���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4488 }
    name     = "��12�R�c"
    location = 900
    home     = 900
    mission  = { type = none target = 1794 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4490 }
      name          = "��9��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4491 }
      name          = "��10��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4492 }
      name          = "��6�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4493 }
      name          = "��6���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4494 }
    name     = "��13�R�c"
    location = 900
    home     = 900
    mission  = { type = none target = 1881 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4496 }
      name          = "��3�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4497 }
      name          = "��4�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4498 }
      name          = "��7���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4499 }
    name     = "��14�R�c"
    location = 900
    home     = 900
    mission  = { type = none target = 1797 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4501 }
      name          = "��5�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4502 }
      name          = "��6�@�B�����b��������"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4503 }
      name          = "��8���b����"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25501 id = 4504 }
    name     = "��15�R�c"
    location = 900
    home     = 900
    mission  = { type = none target = 1882 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 25501 id = 4506 }
      name          = "��11��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4507 }
      name          = "��12��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4508 }
      name          = "��7�@�b����"
      model         = 2
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25501 id = 4509 }
      name          = "��101��p�@�b���"
      model         = 2
      brigade_model = 0
      type          = bergsjaeger
      strength      = 100
    }
    division =
    { id                  = { type = 25501 id = 4510 }
      name                = "��201��p�@�b���"
      model               = 2
      brigade_model       = 0
      type                = marine
      strength            = 100.0000
      organisation        = 37.5000
      morale              = 90.0000
      experience          = 0.0000
      defaultorganisation = 75.0000
      redep_unit_name     = ""
      supplies            = 0.0000
      oil                 = 0.0000
      max_supply_stock    = 14.0000
      max_oil_stock       = 0.0000
      maxspeed            = 5.0000
      supplyconsumption   = 1.0000
      fuelconsumption     = 0.0000
      defensiveness       = 40.0000
      toughness           = 45.0000
      softness            = 50.0000
      suppression         = 3.0000
      airdefence          = 5.0000
      softattack          = 25.0000
      hardattack          = 30.0000
      transportweight     = 15.0000
      airattack           = 4.0000
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4511 }
    name     = "���͑�"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4513 }
      name     = "��1���m�͎t�c"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4514 }
      name     = "��2���m�͎t�c"
      model    = 3
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4515 }
      name     = "��1�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4516 }
      name     = "��2�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4517 }
      name     = "��3�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4518 }
      name     = "��4�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4519 }
      name     = "��1�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4520 }
      name     = "��2�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4521 }
      name     = "��3�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4522 }
      name     = "��4�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4523 }
      name     = "��5�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4524 }
    name     = "���͑�"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4526 }
      name     = "��3���m�͎t�c"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4527 }
      name     = "��6�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4528 }
      name     = "��7�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4529 }
      name     = "��8�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4530 }
      name     = "��9�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4531 }
      name     = "��5�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4532 }
      name     = "��6�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4533 }
      name     = "��7�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4534 }
      name     = "��8�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4535 }
    name     = "��O�͑�"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4537 }
      name     = "��4���m�͎t�c"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4538 }
      name     = "��5���m�͎t�c"
      model    = 2
      type     = heavy_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4539 }
      name     = "��9�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4540 }
      name     = "��10�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4541 }
      name     = "��11�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4542 }
      name     = "��12�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4543 }
      name     = "��13�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4544 }
      name     = "��10�쒀�͎t�c"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4545 }
      name     = "��11�쒀�͎t�c"
      model    = 3
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4546 }
      name     = "��12�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4547 }
      name     = "��13�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4548 }
      name     = "��14�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4549 }
      name     = "��15�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4550 }
    name     = "�����͑�"
    location = 1813
    home     = 1813
    division =
    { id       = { type = 25502 id = 4552 }
      name     = "��1�����͊͑�"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4553 }
      name     = "��2�����͊͑�"
      model    = 2
      type     = submarine
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4554 }
      name     = "��3�����͊͑�"
      model    = 2
      type     = submarine
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4555 }
    name     = "���A���͑�"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4557 }
      name     = "��16�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4558 }
      name     = "��1�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4559 }
      name     = "��2�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4560 }
      name     = "��3�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
  navalunit =
  { id       = { type = 25502 id = 4561 }
    name     = "���A���͑�"
    location = 1906
    home     = 1906
    base     = 1906
    division =
    { id       = { type = 25502 id = 4563 }
      name     = "��17�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4564 }
      name     = "��4�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4565 }
      name     = "��5�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
    division =
    { id       = { type = 25502 id = 4566 }
      name     = "��6�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
