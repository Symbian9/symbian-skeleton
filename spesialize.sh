# Jean-Michel Frouin 2009-2013

#!/bin/bash
PATTERN="skeleton"
PATTERNU="NEW_NAME"
if [[ $# != 1 ]]
 then
  echo "Usage: $0 name"
  exit
fi

echo "Specialize $PATTERN for Symbian in $1"

echo "Refactoring data files"
cat data/$PATTERN_01.rls | sed s/$PATTERN/$1/ > data/$1_01.rls
cat data/$PATTERN_02.rls | sed s/$PATTERN/$1/ > data/$1_02.rls
cat data/$PATTERN_03.rls | sed s/$PATTERN/$1/ > data/$1_03.rls
cat data/$PATTERN_reg.rss | sed s/$PATTERN/$1/ > data/$1_reg.rss
cat data/$PATTERN.rls | sed s/$PATTERN/$1/ > data/$1.rls
cat data/$PATTERN.rss | sed s/$PATTERN/$1/ > data/$1.rss

rm data/$PATTERN_01.rls 
rm data/$PATTERN_02.rls 
rm data/$PATTERN_03.rls 
rm data/$PATTERN_reg.rss
rm data/$PATTERN.rls
rm data/$PATTERN.rss

echo "Renamming gfx files"
mv gfx/qgn_menu_$PATTERN2.svg gfx/qgn_menu_$12.svg
mv gfx/qgn_menu_$PATTERN.svg gfx/qgn_menu_$1.svg

echo "Refactoring group files"
cat group/bld.inf | sed s/$PATTERN/$1/ > group/bld.inf
cat group/icons_scalable_dc.mk | sed s/$PATTERN/$1/ > group/icons_scalable_dc.mk
cat group/$PATTERN.mmp | sed s/$PATTERN/$1/ > group/$1.mmp
rm group/bld.inf
rm group/icons_scalable_dc.mk
rm group/$PATTERN.mmp

echo "Refactoring headers files"
cat inc/$PATTERNapplication.h | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  > inc/$1application.h 
cat inc/$PATTERNappui.h | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  >  inc/$1appui.h
cat inc/$PATTERNappview.h | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  > inc/$1appview.h
cat inc/$PATTERNdocument.h | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  > inc/$1document.h
cat inc/$PATTERN.hrh | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  > inc/$1.hrh
cat inc/$PATTERN.pan | sed s/$PATTERN/$1/ | sed s/$PATTERNU/$1/  > inc/$1.pan

rm inc/$PATTERNapplication.h
rm inc/$PATTERNappui.h
rm inc/$PATTERNappview.h
rm inc/$PATTERNdocument.h
rm inc/$PATTERN.hrh
rm inc/$PATTERN.pan

echo "Refactoring packages files"
cat sis/makesisx.sh | sed s/$PATTERN/$1/ > sis/makesisx.sh
cat sis/$PATTERN.pkg | sed s/$PATTERN/$1/ > sis/$1.pkg
cat sis/$PATTERN_s60v5_lin.pkg | sed s/$PATTERN/$1/ > sis/$1_s60v5_lin.pkg

rm sis/$PATTERN.pkg
rm sis/$PATTERN_s60v5_lin.pkg

echo "And finally source code"
cat src/$PATTERNapplication.cpp | sed s/$PATTERN/$1/ > src/$1application.cpp
cat src/$PATTERNappui.cpp | sed s/$PATTERN/$1/ > src/$1appui.cpp
cat src/$PATTERNappview.cpp | sed s/$PATTERN/$1/ > src/$1appview.cpp
cat src/$PATTERN.cpp | sed s/$PATTERN/$1/ > src/$1.cpp
cat src/$PATTERNdocument.cpp | sed s/$PATTERN/$1/ > src/$1document.cpp

rm src/$PATTERNapplication.cpp
rm src/$PATTERNappui.cpp
rm src/$PATTERNappview.cpp
rm src/$PATTERN.cpp
rm src/$PATTERNdocument.cpp

