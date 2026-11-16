// sub_15922C0
// rva 0x015922c0  size 1029  section .text  group text
// window base 0x1815922c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15922C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64, __int64, __int64, _QWORD); // [rsp+20h] [rbp-18h]

  v4 = MEMORY[0x12002030]/* 0x12002030 */;
  if ( MEMORY[0x120020e0]/* 0x120020e0 */ == 4 )
  {
    result = MEMORY[0x12002030]/* 0x12002030 */(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612160));
    *(_QWORD *)(v2 + 376612160) = 0;
    *(_BYTE *)(v2 + 376612324) = 1;
  }
  if ( MEMORY[0x120020e1]/* 0x120020e1 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612168));
    *(_QWORD *)(v2 + 376612168) = 0;
    *(_BYTE *)(v2 + 376612325) = 1;
  }
  if ( MEMORY[0x120020e2]/* 0x120020e2 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612176));
    *(_QWORD *)(v2 + 376612176) = 0;
    *(_BYTE *)(v2 + 376612326) = 1;
  }
  if ( MEMORY[0x120020e3]/* 0x120020e3 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612184));
    *(_QWORD *)(v2 + 376612184) = 0;
    *(_BYTE *)(v2 + 376612327) = 1;
  }
  if ( MEMORY[0x120020e4]/* 0x120020e4 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612192));
    *(_QWORD *)(v2 + 376612192) = 0;
    *(_BYTE *)(v2 + 376612328) = 1;
  }
  if ( MEMORY[0x120020e5]/* 0x120020e5 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612200));
    *(_QWORD *)(v2 + 376612200) = 0;
    *(_BYTE *)(v2 + 376612329) = 1;
  }
  if ( MEMORY[0x120020e6]/* 0x120020e6 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612208));
    *(_QWORD *)(v2 + 376612208) = 0;
    *(_BYTE *)(v2 + 376612330) = 1;
  }
  if ( MEMORY[0x120020e7]/* 0x120020e7 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612216));
    *(_QWORD *)(v2 + 376612216) = 0;
    *(_BYTE *)(v2 + 376612331) = 1;
  }
  if ( MEMORY[0x120020e8]/* 0x120020e8 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612224));
    *(_QWORD *)(v2 + 376612224) = 0;
    *(_BYTE *)(v2 + 376612332) = 1;
  }
  if ( MEMORY[0x120020e9]/* 0x120020e9 */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612232));
    *(_QWORD *)(v2 + 376612232) = 0;
    *(_BYTE *)(v2 + 376612333) = 1;
  }
  if ( MEMORY[0x120020ea]/* 0x120020ea */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612240));
    *(_QWORD *)(v2 + 376612240) = 0;
    *(_BYTE *)(v2 + 376612334) = 1;
  }
  if ( MEMORY[0x120020eb]/* 0x120020eb */ == 4 )
  {
    result = v4(a1, a2, a3: 301998304, a4: *(_QWORD *)(v2 + 376612248));
    *(_QWORD *)(v2 + 376612248) = 0;
    *(_BYTE *)(v2 + 376612335) = 1;
  }
  if ( MEMORY[0x120020ec]/* 0x120020ec */ == 4 )
  {
    result = v4(a1, a2, a3: *(_QWORD *)(v2 + 376612256), a4: *(_QWORD *)(v2 + 376612256));
    *(_QWORD *)(v2 + 376612256) = 0;
    *(_BYTE *)(v2 + 376612336) = 1;
  }
  return result;
}
