// sub_1ED8840
// rva 0x01ed8840  size 295  section .text  group text
// window base 0x181ed8840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED8840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  _QWORD *i; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned int v14; // [rsp+24h] [rbp-24h]
  _QWORD *v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v16 = a1;
  i = *(_QWORD **)(v6 + 376178840);
  if ( i != nullptr && i[9] <= (unsigned __int64)(a5 - i[10]) )
  {
    for ( i = (_QWORD *)i[20]; i != nullptr && i[9] <= (unsigned __int64)(a5 - i[10]); i = (_QWORD *)i[20] )
      ;
  }
  v15 = i;
  if ( i == nullptr )
    JUMPOUT(0x181ED8957LL);
  v12 = v6 + 8LL * *(unsigned int *)sub_15A85E0(a1, a2, a3: i[22], a4: i[22], a5: 0);
  v14 = sub_1ED8980(a1: a6, a2: v16, a3, a4: 1024, a5, a6: v15);
  sub_15AE5C0(a1: v9, a2: v10, a3: v15, a4: v8, a5: v12);
  return v14;
}
