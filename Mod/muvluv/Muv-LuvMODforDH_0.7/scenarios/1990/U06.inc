
##############################
# Country definition for U06 #
##############################

province =
{ id         = 602
  anti_air   = 4
  air_base   = { size = 4 current_size = 10 }
  Naval_base = { size = 8 current_size = 10 }
}              # ÉjÉÖÅ[ÉàÅ[ÉN
province =
{ id       = 2661
  anti_air = 4
  air_base = { size = 4 current_size = 6 }
}            # ÉÜÅ[ÉRÉìäÓín

#####################
# Country main data #
#####################

country =
{ tag                 = U06
  manpower            = 500
  energy              = 30000
  metal               = 50000
  rare_materials      = 25000
  oil                 = 35000
  supplies            = 8000
  money               = 5500
  capital             = 602
  regular_id          = U92
  transports          = 2200
  escorts             = 2000
  policy =
  { democratic        = 10
    political_left    = 1
    freedom           = 10
    free_market       = 10
    professional_army = 10
    defense_lobby     = 10
    interventionism   = 10
  }
  ownedprovinces      = { 602 2661 }
  controlledprovinces = { 602 2661 }
  techapps            = { 10050 10060 10070 10080 10090 1010  10150 10160 10190 1020  10200 10210 10220 1030  1040  1050  1110  1120  1130  1140 
                          1150  1210  1220  1230  1240  1250  1470  1490  1510  1530  1550  1560  1570  1580  1590  1650  1660  1670  1680  1690 
                          1750  1760  1770  1780  1790  1850  1860  1870  1880  1950  1960  1970  1980  2010  2020  2030  2040  2050  2060  2070 
                          2080  2310  2320  2330  2610  2620  2630  2640  2650  2660  2910  2920  2930  2940  2950  2960  3010  3020  3030  3040 
                          30410 30420 30430 30440 30450 3050  30510 30520 30530 30540 30550 3110  3120  3130  3140  3150  3210  3220  3230  3240 
                          3250  3310  3320  3330  3340  3350  3410  3460  3470  3480  3490  3500  3560  3570  3610  3620  3630  3640  3650  3710 
                          3720  3730  3740  3750  3810  3820  3830  3840  3850  3910  3920  3930  3940  3950  3960  40100 40110 40120 40130 40200
                          40210 40220 40230 40240 40250 4390  4400  4410  4420  4430  4480  4490  4500  4510  4560  4570  50020 50030 50040 50050 50070
                          50080 50090 5010  50100 50110 50120 5020  50290 5030  50300 50310 5040  5050  5090  5100  5110  5120  5170  5180  5190 
                          5200  5250  5260  5270  5280  5330  5340  5350  5360  5370  5410  5420  5430  5460  5490  5500  5520  5530  5540  5550  5600  5610  5620 
                          5630  5680  5690  5700  5760  5770  5780  5790  5800  5810  5820  5830  5840  5850  5910  5920  5930  5940  5950  7010  7500  7510  7520  7530  7670  7680  7690  80080 80090 8010 
                          80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140 90190 9020  9030  9040 
                          9050  9060  9070  9080  9190  9200  9210  9220  9230  9340  9350  9360  9370  9380  9390  9400  9410  9520  9530  9540 
                          9550  9560  9670  9680  9690  9700  9710  9720  9730  9840  9850  9860  9870  9880  9990  60380 60390 60400 60410 10390
                          4010  4020  4030  4040  4050  4110  4120  4130  4140  4150  4210  4220  4230  4240  4250  2340  2360  2090  2670  2680
                          2970  2980  4640  4650  4660  4670  4680  4820  4830  4840  4850  4860  40000 40010 40020 40030 40040 7270  
                          7280  7150  7160  7170  7180  7190  7200  7210  7220  7230  7240  20410 20420 20430 20440 7080  7750  7760  7540  7610  7320
                          7030  7040  7050  7060  30170 30230 30320 30380 50320 50330 5710  5720  40140 40150
                          2000  2210  3000  4000  5000  6100  6110  6280  6290  6300  6600  6610
                        }
  nationalprovinces   = { 1    10   100  1000 1001 1002 1003 1004 1005 1006 1007 1008 1009 101  1010 1011 1012 1013 1014 1015 1016 1017 1018 1019 102 
                          1020 1021 1022 1023 1024 1025 1026 1027 1028 1029 103  1030 1031 1032 1033 1034 1035 1036 1037 1038 1039 104  1040 1041 1042
                          1043 1044 1045 1046 1047 1048 1049 105  1050 1051 1052 1053 1054 1055 1056 1057 1058 1059 106  1060 1061 1062 1063 1064 1065
                          1066 1067 1068 1069 107  1070 1071 1072 1073 1074 1075 1076 1077 1078 1079 108  1080 1081 1082 1083 1084 1085 1086 1087 1088
                          1089 109  1090 1091 1092 1093 1094 1095 1096 1097 1098 1099 11   110  1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 111 
                          1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 112  1120 1121 1122 1123 1124 1125 1126 1127 1128 1129 113  1130 1131 1132
                          1133 1134 1135 1136 1137 1138 1139 114  1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 115  1150 1151 1152 1153 1154 1155
                          1156 1157 1158 1159 116  1160 1161 1162 1163 1164 1165 1166 1167 1168 1169 117  1170 1171 1172 1173 1174 1175 1176 1177 1178
                          1179 118  1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 119  1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 12   120 
                          1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 121  1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 122  1220 1221 1222
                          1223 1224 1225 1226 1227 1228 1229 123  1230 1231 1232 1233 1234 1235 1236 1237 1238 1239 124  1240 1241 1242 1243 1244 1245
                          1246 1247 1248 1249 125  1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 126  1260 1261 1262 1263 1264 1265 1266 1267 1268
                          1269 127  1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 128  1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 129  1290
                          1291 1292 1293 1294 1295 1296 1297 1298 1299 13   130  1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 131  1310 1311 1312
                          1313 1314 1315 1316 1317 1318 1319 132  1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 133  1330 1331 1332 1333 1334 1335
                          1336 1337 1338 1339 134  1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 135  1350 1351 1352 1353 1354 1355 1356 1357 1358
                          1359 136  1360 1361 1362 1363 1364 1365 1366 1367 1368 1369 137  1370 1371 1372 1373 1374 1375 1376 1377 1378 1379 138  1380
                          1381 1382 1383 1384 1385 1386 1387 1388 1389 139  1390 1391 1392 1393 1394 1395 1396 1397 1398 1399 14   140  1400 1401 1402
                          1403 1404 1405 1406 1407 1408 1409 141  1410 1411 1412 1413 1414 1415 1416 1417 1418 1419 142  1420 1421 1422 1423 1424 1425
                          1426 1427 1428 1429 143  1430 1432 1433 1434 1435 1436 1437 1438 1439 144  1440 1441 1442 1443 1444 1445 1446 1447 1448 1449
                          145  1450 1451 1452 1453 1454 1455 1456 1457 1458 1459 146  1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 147  1470 1471
                          1472 1473 1474 1475 1476 1477 1478 1479 148  1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 149  1490 1491 1492 1493 1494
                          1495 1496 1497 1498 1499 15   150  1500 1501 1502 1503 1504 1505 1506 1507 1508 1509 151  1510 1511 1512 1513 1514 1515 1516
                          1517 1518 1519 152  1520 1521 1522 1523 1524 1525 1526 1527 1528 1529 153  1530 1531 1532 1533 1534 1535 1536 1537 1538 1539
                          154  1540 1541 1542 1543 1544 1545 1546 1547 1548 1549 155  1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 156  1560 1561
                          1562 1563 1564 1565 1566 1567 1568 1569 157  1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 158  1580 1581 1582 1583 1584
                          1585 1586 1587 1588 1589 159  1590 1591 1592 1593 1594 1595 1596 1597 1598 1599 16   160  1600 1601 1602 1603 1604 1605 1606
                          1607 1608 1609 161  1610 1611 1612 1613 1614 1615 1616 1617 1618 1619 162  1620 1621 1622 1623 1624 1625 1626 1627 1628 1629
                          163  1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 164  1640 1641 1642 1643 1644 1645 1646 1647 1648 1649 165  1650 1651
                          1652 1653 1654 1655 1656 1657 1658 1659 166  1660 1661 1662 1663 1664 1665 1666 1667 1668 1669 167  1670 1671 1672 1673 1674
                          1675 1676 1677 1678 1679 168  1680 1681 1682 1683 1684 1685 1686 1687 1688 1689 169  1690 1691 1692 1693 1694 1695 1696 1697
                          1698 1699 17   170  1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 171  1710 1711 1712 1713 1714 1715 1716 1717 1718 1719
                          172  1720 1721 1722 1723 1724 1725 1726 1727 1728 1729 173  1730 1731 1732 1733 1734 1735 1736 1737 1738 1739 174  1740 1741
                          1742 1743 1744 1745 1746 1747 1748 1749 175  1750 1751 1752 1753 1754 1755 1756 1757 1758 1759 176  1760 1761 1762 1763 1764
                          1765 1766 1767 1768 1769 177  1770 1771 1772 1773 1774 1775 1776 1777 1778 1779 178  1780 1781 1782 1783 1784 1785 1786 1787
                          1788 1789 179  1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 18   180  1800 1801 1802 1803 1804 1805 1806 1807 1808 1809
                          181  1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 182  1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 183  1830 1831
                          1832 1833 1834 1835 1836 1837 1838 1839 184  1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 185  1850 1851 1852 1853 1854
                          1855 1856 1857 1858 1859 186  1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 187  1870 1871 1872 1873 1874 1875 1876 1877
                          1878 188  1880 1881 1882 1884 1885 1886 1887 1888 1889 189  1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 19   190  1903
                          1905 1906 1907 1909 191  1910 1911 1912 1913 1914 1918 192  1921 1922 1923 1928 193  1936 1937 1938 1939 194  1941 195  196 
                          1964 1965 1966 197  1978 198  1983 1984 199  1993 1995 1996 1997 2    20   200  2000 201  2019 202  2021 2024 203  204  2043
                          205  206  207  208  2085 209  2091 2092 2094 2099 21   210  2104 2106 211  2111 212  2124 213  2133 214  215  216  217  2175
                          218  219  2198 2199 22   220  221  2219 222  2226 223  2231 2234 2236 2238 224  2240 2241 2242 2243 2244 2245 2246 225  2255
                          2259 226  2261 227  228  2281 2283 2284 229  23   230  231  2311 2317 2318 2319 232  2321 2322 2323 2324 2325 2326 2327 2328
                          2329 233  2331 2332 2333 2334 2337 2338 2339 234  2340 2341 2342 2344 2345 2346 2347 2348 2349 235  236  2365 2367 237  2377
                          238  239  24   240  241  242  243  244  2447 2449 245  2450 246  2460 247  2470 248  2485 2486 2487 2488 249  2496 25   250 
                          2502 2503 2504 2505 2507 2508 2509 251  2511 2513 2514 2515 2516 2517 2518 252  2520 2522 2523 2525 2526 2527 2528 2529 253 
                          2530 2531 2533 2534 2538 254  255  2550 2551 2555 2556 2557 2558 2559 256  2560 2561 2567 2568 2569 257  2570 2571 2572 2573
                          2574 2576 258  259  2592 26   260  2602 2603 2604 2605 2606 2607 2608 2609 261  2610 2611 2612 2613 2614 2615 2616 2617 2618
                          2619 262  2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 263  2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 264  2640
                          265  266  267  268  269  27   270  271  272  273  274  275  276  277  278  279  28   280  281  282  283  284  285  286  287 
                          288  289  29   291  292  293  294  295  296  297  298  299  3    30   300  301  302  303  304  305  306  307  308  309  31  
                          310  311  312  313  314  315  316  317  318  319  32   320  321  322  323  324  325  326  327  328  329  33   330  331  332 
                          333  334  335  336  337  338  339  34   340  341  342  343  344  345  346  347  348  349  35   350  351  352  353  354  355 
                          356  357  358  359  36   360  361  362  363  364  365  366  367  368  369  37   370  371  372  373  374  375  376  377  378 
                          379  38   380  381  382  383  384  385  386  387  388  389  39   390  391  392  393  394  395  396  398  399  4    40   400 
                          401  402  403  404  405  406  407  408  409  41   410  411  412  413  414  415  416  417  418  419  42   420  421  422  423 
                          424  425  426  427  428  429  43   430  431  432  433  434  435  436  437  438  439  44   440  441  442  443  444  445  446 
                          447  448  449  45   450  451  452  453  454  455  456  457  458  459  46   460  461  462  463  464  465  466  467  468  469 
                          47   470  471  472  473  474  475  476  477  478  479  48   480  481  482  483  484  485  486  487  488  489  49   490  491 
                          492  493  494  495  496  497  498  499  5    50   500  501  502  503  504  505  506  507  508  509  51   510  511  512  513 
                          514  515  516  517  518  519  52   520  521  522  523  524  525  526  527  528  529  53   530  531  532  533  534  535  536 
                          537  538  539  54   540  541  542  543  544  545  546  547  548  549  55   550  551  552  553  554  555  556  557  558  559 
                          56   560  561  562  563  564  565  566  567  568  569  57   570  571  572  573  574  575  576  577  578  579  58   580  581 
                          582  583  584  585  586  587  588  589  59   590  591  592  593  594  595  596  597  598  599  6    60   600  601  602  603 
                          604  605  606  607  608  609  61   610  611  612  613  614  615  616  617  618  619  62   620  621  622  623  624  625  626 
                          627  628  629  63   630  631  632  633  634  635  636  637  638  639  64   640  641  642  643  644  645  646  647  648  649 
                          65   650  651  652  653  654  655  656  657  658  659  66   660  661  662  663  664  665  666  667  668  669  67   670  671 
                          672  673  674  675  676  677  678  679  68   680  681  682  683  684  685  686  687  688  689  69   690  691  692  693  694 
                          695  696  697  698  699  7    70   700  701  702  703  704  705  706  707  708  709  71   710  711  712  713  714  715  716 
                          717  718  719  72   720  721  722  723  724  725  726  727  728  729  73   730  731  732  733  734  735  736  737  738  739 
                          74   740  741  742  743  744  745  746  747  748  749  75   750  751  752  753  754  755  756  757  758  759  76   760  761 
                          762  763  764  765  766  767  768  769  77   770  771  772  773  774  775  776  777  778  779  78   780  781  782  783  784 
                          785  786  787  788  789  79   790  791  792  793  794  795  796  797  798  799  8    80   800  801  802  803  804  805  806 
                          807  808  809  81   810  811  812  813  814  815  816  817  818  819  82   820  821  822  823  824  825  826  827  828  829 
                          83   830  831  832  833  834  835  836  837  838  839  84   840  841  842  843  844  845  846  847  848  849  85   850  851 
                          852  853  854  855  856  857  858  859  86   860  861  862  863  864  865  866  867  868  869  87   870  871  872  873  874 
                          875  876  877  878  879  88   880  881  882  883  884  885  886  887  888  889  89   890  891  892  893  894  895  896  897 
                          898  899  9    90   900  901  902  903  904  905  906  907  909  91   910  911  912  913  914  915  916  917  918  919  92  
                          920  921  922  923  924  925  926  927  928  929  93   930  931  932  933  934  935  936  937  938  939  94   940  941  942 
                          943  944  945  946  947  948  949  95   950  951  952  953  954  955  956  957  958  959  96   960  961  962  963  964  965 
                          966  967  968  969  97   970  971  972  973  974  975  976  977  978  979  98   980  981  982  983  984  985  986  987  988 
                          989  99   990  991  992  993  994  995  996  997  998  999  1431 908  2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651
                          2652 2653 2654 2655 2656 2657 2658 2659 2660 2661
                        }
free                = { energy = 150 metal = 100 rare_materials = 100 oil = 100 ic = 90 supplies = 250 }
 inventions             = { 8000 8001 8006 8007 8009 8011 8012 8004 8005 }
  landunit =
  { id       = { type = 27001 id = 6320 }
    name     = "ã…ìåëÊàÍåRéióﬂïî"
    location = 2624
    home     = 2624
    #mission  = { type = none target = 2624 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6322 }
      name          = "ëÊ1åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6323 }
    name     = "ëÊ1åRíc"
    location = 2624
    home     = 2624
    #mission  = { type = none target = 2624 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6325 }
      name          = "ëÊ1êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6326 }
      name          = "ëÊ2êÌèpã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6327 }
      name          = "ëÊ1ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6328 }
    name     = "ã…ìåëÊìÒåRéióﬂïî"
    location = 22
    home     = 22
    #mission  = { type = none target = 22 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6330 }
      name          = "ëÊ2åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6331 }
    name     = "ëÊ2åRíc"
    location = 1441
    home     = 1441
    #mission  = { type = none target = 1441 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6333 }
      name          = "ëÊ3êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6334 }
      name          = "ëÊ4êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6335 }
      name          = "ëÊ2ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6336 }
    name     = "ëÊ3åRíc"
    location = 1441
    home     = 1441
    #mission  = { type = none target = 1441 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6338 }
      name          = "ëÊ3ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6339 }
      name          = "ëÊ4ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6340 }
      name          = "ëÊ5ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6341 }
    name     = "ëÊ4åRíc"
    location = 1406
    home     = 1406
    #mission  = { type = none target = 1406 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6343 }
      name          = "ëÊ5êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6344 }
      name          = "ëÊ6êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6345 }
      name          = "ëÊ6ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6346 }
    name     = "ëÊ5åRíc"
    location = 127
    home     = 127
    #mission  = { type = none target = 127 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6348 }
      name          = "ëÊ7êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6349 }
      name          = "ëÊ8êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6350 }
      name          = "ëÊ7ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6351 }
    name     = "ëÊ6åRíc"
    location = 1453
    home     = 1453
    #mission  = { type = none target = 1453 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6353 }
      name          = "ëÊ9êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6354 }
      name          = "ëÊ10êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6355 }
      name          = "ëÊ8ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6356 }
    name     = "â¢èBëÊàÍåRéióﬂïî"
    location = 2624
    home     = 2624
    #mission  = { type = none target = 2624 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6358 }
      name          = "ëÊ3åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6359 }
    name     = "ëÊ7åRíc"
    location = 17
    home     = 17
    #mission  = { type = none target = 17 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6361 }
      name          = "ëÊ11êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6362 }
      name          = "ëÊ12êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6363 }
      name          = "ëÊ9ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6364 }
    name     = "ëÊ8åRíc"
    location = 20
    home     = 20
    #mission  = { type = none target = 20 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6366 }
      name          = "ëÊ13êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6367 }
      name          = "ëÊ14êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6368 }
      name          = "ëÊ10ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6369 }
    name     = "ëÊ9åRíc"
    location = 23
    home     = 23
    #mission  = { type = none target = 23 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6371 }
      name          = "ëÊ15êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6372 }
      name          = "ëÊ16êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6373 }
      name          = "ëÊ11ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6374 }
    name     = "â¢èBëÊìÒåRéióﬂïî"
    location = 127
    home     = 127
    #mission  = { type = none target = 127 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6376 }
      name          = "ëÊ4åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6377 }
    name     = "ëÊ10åRíc"
    location = 132
    home     = 132
    #mission  = { type = none target = 133 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6379 }
      name          = "ëÊ17êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6380 }
      name          = "ëÊ18êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6381 }
      name          = "ëÊ12ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6382 }
    name     = "ëÊ11åRíc"
    location = 127
    home     = 127
    #mission  = { type = none target = 130 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6384 }
      name          = "ëÊ19êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6385 }
      name          = "ëÊ20êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6386 }
      name          = "ëÊ13ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6387 }
    name     = "ëÊ12åRíc"
    location = 131
    home     = 131
    #mission  = { type = none target = 131 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6389 }
      name          = "ëÊ21êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6390 }
      name          = "ëÊ22êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6391 }
      name          = "ëÊ14ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6392 }
    name     = "ëÊ13åRíc"
    location = 127
    home     = 127
    #mission  = { type = none target = 130 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6394 }
      name          = "ëÊ15ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6395 }
      name          = "ëÊ16ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6396 }
      name          = "ëÊ17ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6397 }
    name     = "ëÊ14åRíc"
    location = 131
    home     = 131
    #mission  = { type = none target = 131 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6399 }
      name          = "ëÊ18ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6400 }
      name          = "ëÊ1ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6401 }
      name          = "ëÊ2ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6402 }
    name     = "çëòAìùçáåRëçéióﬂïî"
    location = 602
    home     = 602
    #mission  = { type = none target = 602 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6404 }
      name          = "ëÊ5åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6405 }
    name     = "ëÊ15åRíc"
    location = 602
    home     = 602
    #mission  = { type = none target = 602 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6407 }
      name          = "ëÊ23êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6408 }
      name          = "ëÊ24êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6409 }
      name          = "ëÊ19ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6410 }
    name     = "ëÊ16åRíc"
    location = 602
    home     = 602
    #mission  = { type = none target = 602 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6412 }
      name          = "ëÊ1ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6413 }
      name          = "ëÊ2ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6414 }
      name          = "ëÊ3ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6415 }
    name     = "ìÏïƒåRéióﬂïî"
    location = 846
    home     = 846
    #mission  = { type = none target = 846 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6417 }
      name          = "ëÊ6åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6418 }
    name     = "ëÊ17åRíc"
    location = 846
    home     = 846
    #mission  = { type = none target = 846 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6420 }
      name          = "ëÊ4ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6421 }
      name          = "ëÊ5ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6422 }
      name          = "ëÊ6ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6423 }
    name     = "ÉIÉZÉAÉjÉAåRéióﬂïî"
    location = 1727
    home     = 1727
    #mission  = { type = none target = 1727 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6425 }
      name          = "ëÊ7åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6426 }
    name     = "ëÊ18åRíc"
    location = 1727
    home     = 1727
    #mission  = { type = none target = 1727 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6428 }
      name          = "ëÊ7ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6429 }
      name          = "ëÊ8ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6430 }
      name          = "ëÊ9ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6431 }
    name     = "ÉCÉìÉhåRéióﬂïî"
    location = 1462
    home     = 1462
    #mission  = { type = none target = 1462 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6433 }
      name          = "ëÊ8åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6434 }
    name     = "ëÊ19åRíc"
    location = 597
    home     = 597
    #mission  = { type = none target = 597 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6436 }
      name          = "ëÊ25êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6437 }
      name          = "ëÊ26êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6438 }
      name          = "ëÊ20ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6439 }
    name     = "ëÊ20åRíc"
    location = 597
    home     = 597
    #mission  = { type = none target = 597 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6441 }
      name          = "ëÊ21ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6442 }
      name          = "ëÊ22ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6443 }
      name          = "ëÊ23ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6444 }
    name     = "ëÊ21åRíc"
    location = 597
    home     = 597
    #mission  = { type = none target = 597 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6446 }
      name          = "ëÊ10ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6447 }
      name          = "ëÊ11ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6448 }
      name          = "ëÊ12ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6449 }
    name     = "ëÊ22åRíc"
    location = 1699
    home     = 1699
    #mission  = { type = none target = 1699 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6451 }
      name          = "ëÊ27êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6452 }
      name          = "ëÊ28êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6453 }
      name          = "ëÊ24ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6454 }
    name     = "ëÊ23åRíc"
    location = 1699
    home     = 1699
    #mission  = { type = none target = 1699 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6456 }
      name          = "ëÊ13ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6457 }
      name          = "ëÊ14ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6458 }
      name          = "ëÊ15ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6459 }
    name     = "ëÊ24åRíc"
    location = 1699
    home     = 1699
    #mission  = { type = none target = 1699 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6461 }
      name          = "ëÊ25ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6462 }
      name          = "ëÊ3ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6463 }
      name          = "ëÊ4ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6464 }
    name     = "ëÊ25åRíc"
    location = 669
    home     = 669
    #mission  = { type = none target = 669 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6466 }
      name          = "ëÊ29êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6467 }
      name          = "ëÊ30êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6468 }
      name          = "ëÊ26ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6469 }
    name     = "ëÊ26åRíc"
    location = 669
    home     = 669
    #mission  = { type = none target = 669 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6471 }
      name          = "ëÊ16ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6472 }
      name          = "ëÊ17ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6473 }
      name          = "ëÊ18ã@äBâªëïçbï‡ï∫ëÂë‡"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6474 }
    name     = "ëÊ27åRíc"
    location = 669
    home     = 669
    #mission  = { type = none target = 669 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6476 }
      name          = "ëÊ27ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6477 }
      name          = "ëÊ5ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6478 }
      name          = "ëÊ6ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6479 }
    name     = "ëÊ28åRíc"
    location = 1463
    home     = 1463
    #mission  = { type = none target = 1463 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6481 }
      name          = "ëÊ31êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6482 }
      name          = "ëÊ32êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6483 }
      name          = "ëÊ28ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6484 }
    name     = "ëÊ29åRíc"
    location = 1463
    home     = 1463
    #mission  = { type = none target = 1463 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6486 }
      name          = "ëÊ29ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6487 }
      name          = "ëÊ30ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6488 }
      name          = "ëÊ31ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6489 }
    name     = "ÉAÉtÉäÉJåRéióﬂïî"
    location = 902
    home     = 902
    #mission  = { type = none target = 902 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6491 }
      name          = "ëÊ9åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6492 }
    name     = "ëÊ30åRíc"
    location = 901
    home     = 901
    #mission  = { type = none target = 901 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6494 }
      name          = "ëÊ32ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6495 }
      name          = "ëÊ33ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6496 }
      name          = "ëÊ34ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6497 }
    name     = "ëÊ31åRíc"
    location = 901
    home     = 901
    #mission  = { type = none target = 901 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6499 }
      name          = "ëÊ35ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6500 }
      name          = "ëÊ7ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6501 }
      name          = "ëÊ8ëïçbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = light_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6502 }
    name     = "ëÊ32åRíc"
    location = 900
    home     = 900
    #mission  = { type = none target = 900 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6504 }
      name          = "ëÊ33êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6505 }
      name          = "ëÊ34êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6506 }
      name          = "ëÊ36ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6507 }
    name     = "íÜìååRéióﬂïî"
    location = 1802
    home     = 1802
    #mission  = { type = none target = 1802 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6509 }
      name          = "ëÊ10åRéióﬂïî"
      model         = 3
      brigade_model = 0
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6510 }
    name     = "ëÊ33åRíc"
    location = 1808
    home     = 1808
    #mission  = { type = none target = 1808 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6512 }
      name          = "ëÊ37ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6513 }
      name          = "ëÊ38ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6514 }
      name          = "ëÊ39ã@çbëÂë‡"
      model         = 4
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6515 }
    name     = "ëÊ34åRíc"
    location = 1796
    home     = 1796
    #mission  = { type = none target = 1796 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6517 }
      name          = "ëÊ35êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6518 }
      name          = "ëÊ36êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6519 }
      name          = "ëÊ40ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6665 }
    name     = "ëÊ15åRíc"
    location = 343
    home     = 343
    #mission  = { type = none target = 343 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6666 }
      name          = "ëÊ21êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6667 }
    name     = "ëÊ22åRíc"
    location = 335
    home     = 335
    #mission  = { type = none target = 335 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6668 }
      name          = "ëÊ34êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6669 }
    name     = "ëÊ54åRíc"
    location = 1163
    home     = 1163
    #mission  = { type = none target = 1163 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6670 }
      name          = "ëÊ343êÌèpã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6671 }
    name     = "ëÊ45åRíc"
    location = 513
    home     = 513
    #mission  = { type = none target = 513 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6672 }
      name          = "ëÊ65êÌèpã@çbëÂë‡"
      model         = 7
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6673 }
      name          = "ëÊ63êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6674 }
      name          = "ëÊ44ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 27001 id = 6675 }
    name     = "ëÊ45åRíc"
    location = 512
    home     = 512
    #mission  = { type = none target = 512 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 27001 id = 6676 }
      name          = "ëÊ74êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6677 }
      name          = "ëÊ36êÌèpã@çbëÂë‡"
      model         = 6
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 27001 id = 6678 }
      name          = "ëÊ101ã@çbëÂë‡"
      model         = 5
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6520 }
    name     = "ã…ìåäÕë‡"
    location = 2635
    home     = 2635
    base     = 2635
    division =
    { id       = { type = 27002 id = 6522 }
      name     = "Utah"
      model    = 4
      type     = battleship
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6523 }
      name     = "Herne"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6524 }
      name     = "îíä~"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6525 }
      name     = "Jarvis"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6526 }
      name     = "Jaguar"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6527 }
      name     = "Mertz"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6528 }
      name     = "Bernadou"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6529 }
      name     = "Gerfaut"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6530 }
      name     = "ëÅí™"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6531 }
      name     = "Bullard"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6532 }
      name     = "HarryE.Hubbard"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6533 }
    name     = "ëÊélã≠èPäÕë‡"
    location = 2635
    home     = 2635
    base     = 2635
    division =
    { id       = { type = 27002 id = 6535 }
      name     = "Biter"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6536 }
      name     = "Perseus"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6537 }
      name     = "ï~ìá"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6538 }
      name     = "EdgarQuinet"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6539 }
      name     = "Daedalus"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6540 }
      name     = "Austin"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6541 }
      name     = "Tage"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6542 }
      name     = "D'Entrecasteaux"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6543 }
      name     = "Salem"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6544 }
      name     = "Datura"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6545 }
      name     = "Francoa"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6546 }
      name     = "Fresia"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6547 }
      name     = "Godetia"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6548 }
      name     = "Djemnah"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6549 }
      name     = "Frondeur"
      model    = 5
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6550 }
    name     = "ëÊélóAëóäÕë‡"
    location = 2635
    home     = 2635
    base     = 2635
    division =
    { id       = { type = 27002 id = 6552 }
      name     = "Loyal"
      model    = 3
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6553 }
      name     = "Flandre"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6554 }
      name     = "Gallia"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6555 }
      name     = "Gange"
      model    = 3
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6556 }
    name     = "â¢èBäÕë‡"
    location = 17
    home     = 17
    base     = 17
    division =
    { id       = { type = 27002 id = 6558 }
      name     = "Devastation"
      model    = 4
      type     = battleship
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6559 }
      name     = "Scranton"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6560 }
      name     = "Toledo"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6561 }
      name     = "Fullam"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6562 }
      name     = "LewisHancock"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6563 }
      name     = "Lookout"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6564 }
      name     = "Raider"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6565 }
      name     = "Leutze"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6566 }
      name     = "Southard"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6567 }
      name     = "LeMars"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6568 }
      name     = "Buchanan"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6569 }
    name     = "ëÊå‹ã≠èPäÕë‡"
    location = 17
    home     = 17
    base     = 17
    division =
    { id       = { type = 27002 id = 6571 }
      name     = "Cabot"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6572 }
      name     = "äCòh"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6573 }
      name     = "Thuringen"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6574 }
      name     = "YellowTavern"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6575 }
      name     = "Chemnitz"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6576 }
      name     = "Columbia"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6577 }
      name     = "Graudenz"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6578 }
      name     = "Richmond"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6579 }
      name     = "Golo"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6580 }
      name     = "Ipeca"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6581 }
      name     = "Lutetia"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6582 }
      name     = "Niagara"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6583 }
      name     = "Polynesian"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6584 }
      name     = "Paulowina"
      model    = 5
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6585 }
    name     = "ëÊå‹óAëóäÕë‡"
    location = 17
    home     = 17
    base     = 17
    division =
    { id       = { type = 27002 id = 6587 }
      name     = "Orkan"
      model    = 3
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6588 }
      name     = "Reseda"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6589 }
      name     = "Farouche"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6590 }
      name     = "Favori"
      model    = 3
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6591 }
    name     = "íníÜäCäÕë‡"
    location = 534
    home     = 534
    base     = 534
    division =
    { id       = { type = 27002 id = 6593 }
      name     = "êŒå©"
      model    = 4
      type     = battleship
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6594 }
      name     = "éRíÉâ‘"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6595 }
      name     = "Cornwall"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6596 }
      name     = "Defender"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6597 }
      name     = "Ringgold"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6598 }
      name     = "äCïó"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6599 }
      name     = "Nicholas"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6600 }
      name     = "êô"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6601 }
      name     = "í∑åé"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6602 }
      name     = "Fleuret"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6603 }
      name     = "èHåé"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6604 }
    name     = "ëÊàÍã≠èPäÕë‡"
    location = 534
    home     = 534
    base     = 534
    division =
    { id       = { type = 27002 id = 6606 }
      name     = "Smiter"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6607 }
      name     = "Slinger"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6608 }
      name     = "PuertoRico"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6609 }
      name     = "ñÄñÎ"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6610 }
      name     = "Omaha"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6611 }
      name     = "Forbin"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6612 }
      name     = "LatoucheTreville"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6613 }
      name     = "Hummel"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6614 }
      name     = "Youngstown"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6615 }
      name     = "Grognard"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6616 }
      name     = "Damier"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6617 }
      name     = "Ivoise"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6618 }
      name     = "Troupier"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6619 }
      name     = "Veteran"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6620 }
      name     = "Furieux"
      model    = 5
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6621 }
    name     = "ëÊàÍóAëóäÕë‡"
    location = 534
    home     = 534
    base     = 534
    division =
    { id       = { type = 27002 id = 6623 }
      name     = "Shubrick"
      model    = 3
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6624 }
      name     = "Franc-Tireur"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6625 }
      name     = "Fusiler"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6626 }
      name     = "Sauge"
      model    = 3
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6627 }
    name     = "ÉCÉìÉhómäÕë‡"
    location = 1817
    home     = 1817
    base     = 1817
    division =
    { id       = { type = 27002 id = 6629 }
      name     = "Lorraine"
      model    = 4
      type     = battleship
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6630 }
      name     = "è@íJ"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6631 }
      name     = "Augusta"
      model    = 4
      type     = heavy_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6632 }
      name     = "èHâ_"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6633 }
      name     = "íJïó"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6634 }
      name     = "éRïó"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6635 }
      name     = "Pellew"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6636 }
      name     = "Converse"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6637 }
      name     = "Burns"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6638 }
      name     = "Brestois"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6639 }
      name     = "ane"
      model    = 4
      type     = destroyer
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6640 }
    name     = "ëÊéOã≠èPäÕë‡"
    location = 1817
    home     = 1817
    base     = 1817
    division =
    { id       = { type = 27002 id = 6642 }
      name     = "Stalker"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6643 }
      name     = "Theseus"
      model    = 3
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 4
    }
    division =
    { id       = { type = 27002 id = 6644 }
      name     = "Waldeck-Roeau"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6645 }
      name     = "åéìá"
      model    = 3
      type     = battlecruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6646 }
      name     = "Fargo"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6647 }
      name     = "Undine"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6648 }
      name     = "Diadem"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6649 }
      name     = "SantaFe"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6650 }
      name     = "Kiel"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6651 }
      name     = "Bermuda"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6652 }
      name     = "Manchester"
      model    = 3
      type     = light_cruiser
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6653 }
      name     = "Dattier"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6654 }
      name     = "Cocotier"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6655 }
      name     = "Flambant"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6656 }
      name     = "Timgad"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6657 }
      name     = "Alcyon"
      model    = 5
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6658 }
      name     = "Lorientais"
      model    = 5
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6659 }
    name     = "ëÊéOóAëóäÕë‡"
    location = 1817
    home     = 1817
    base     = 1817
    division =
    { id       = { type = 27002 id = 6661 }
      name     = "àÈïó"
      model    = 3
      type     = destroyer
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6662 }
      name     = "Tetuan"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6663 }
      name     = "Camelia"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6664 }
      name     = "Palmier"
      model    = 3
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 27002 id = 6665 }
    name     = "ëÊ11îCñ±ïîë‡"
    location = 602
    home     = 602
    base     = 602
    division =
    { id       = { type = 27002 id = 6666 }
      name     = "ëÊ1óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6667 }
      name     = "ëÊ2óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6668 }
      name     = "ëÊ3óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6669 }
      name     = "ëÊ4óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6670 }
      name     = "ëÊ5óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6671 }
      name     = "ëÊ6óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6672 }
      name     = "ëÊ7óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6673 }
      name     = "ëÊ8óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6674 }
      name     = "ëÊ9óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6675 }
      name     = "ëÊ10óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6676 }
      name     = "ëÊ11óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 27002 id = 6677 }
      name     = "ëÊ12óAëóîCñ±ïîë‡"
      model    = 3
      type     = transport
      strength = 100.0000
    }
  }
  ## ÉOÉåÅ[ÉgÉuÉäÉeÉììáé¸ï”ï∫óÕ
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6717 }
    name = "âpçëîhå≠ëÊ1êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6718 }
    name = "âpçëîhå≠ëÊ2êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6719 }
    name = "âpçëîhå≠ëÊ3êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6720 }
    name = "âpçëîhå≠ëÊ4êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6721 }
    name = "âpçëîhå≠ëÊ5êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6722 }
    name = "âpçëîhå≠ëÊ6êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  ## ÉVÉ`ÉäÉAìáé¸ï”ï∫óÕ
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6723 }
    name = "ÉVÉ`ÉäÉAîhå≠ëÊ1êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6724 }
    name = "ÉVÉ`ÉäÉAîhå≠ëÊ2êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6725 }
    name = "ÉVÉ`ÉäÉAîhå≠ëÊ3êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  ## ÉtÉBÉäÉsÉìé¸ï”ï∫óÕ
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6726 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ1êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6727 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ2êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6728 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ3êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6729 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ4êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6730 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ5êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6731 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ6êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6732 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ7êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6733 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ8êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6734 }
    name = "ÉtÉBÉäÉsÉìîhå≠ëÊ9êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  ## ì˙ñ{é¸ï”ï∫óÕ
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6735 }
    name = "ç›ì˙çëòAåRëÊ1êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6736 }
    name = "ç›ì˙çëòAåRëÊ2êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6737 }
    name = "ç›ì˙çëòAåRëÊ3êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6738 }
    name = "ç›ì˙çëòAåRëÊ4êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6739 }
    name = "ç›ì˙çëòAåRëÊ5êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
  landdivision = {
    dormant = yes
    id = { type = 27001 id = 6740 }
    name = "ç›ì˙çëòAåRëÊ6êÌèpã@ëÂë‡"
    strength = 100
    type = paratrooper model = 6
  }
}
