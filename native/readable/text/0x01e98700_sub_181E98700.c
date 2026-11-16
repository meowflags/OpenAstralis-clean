// sub_1E98700
// rva 0x01e98700  size 147  section .text  group text
// window base 0x181e98700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_1E98700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  char *v6; // rax
  __int64 v7; // rdx
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v6 = (char *)sub_1E99820(a1, a2, a3: v5 + 376655336);
  __sync_fetch_and_add((volatile signed __int64 *)(v5 + 376655776), 0x80000u);
  __sync_fetch_and_add((volatile signed __int64 *)(v5 + 376652832), 0x80000u);
  if ( v6 == nullptr )
    return nullptr;
  v7 = *((_QWORD *)v6 + 4);
  if ( a5 > *(_QWORD *)v6 - v7 )
  {
    v8 = nullptr;
  }
  else
  {
    v8 = &v6[v7];
    *((_QWORD *)v6 + 4) = &v8[a5] - v6;
  }
  v9 = *(_QWORD *)(v5 + 376656592);
  if ( v9 != 0 )
    v10 = v9 - (_QWORD)v6;
  else
    v10 = 0;
  *((_QWORD *)v6 + 2) = v10;
  *(_QWORD *)(v5 + 376656592) = v6;
  return v8;
}
