// sub_132C8E50
// rva 0x132c8e50  size 278  section .text  group text
// window base 0x1932c8e50: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  char v6; // bl
  int v7; // esi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // di
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi

  if ( (unsigned __int8)sub_132C95CC(a1, a2: a3, a3, a4: 0) == 0 )
    return 0;
  v6 = sub_132C9460();
  LOBYTE(v10) = 1;
  if ( sub_132CA350 != 0 )
  {
    sub_132C9994(a1: v10, a2: v7, a3: v5, a4: 7, a5: v8, a6: v9);
    __builtin_debugtrap();
    JUMPOUT(0x1932C8F66LL);
  }
  MEMORY[0x337db0]/* 0x337db0 */ = 1;
  if ( (unsigned __int8)sub_132C94D0(a1: v10) != 0 )
  {
    sub_132C9AE0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16);
    sub_1932C9948();
    sub_132C9964();
    if ( (unsigned int)sub_1932CA28D(a1: v17, a2: v18, a3: 499112, a4: 499104) == 0
      && (unsigned __int8)sub_132C949C() != 0 )
    {
      sub_1932CA287(a1: v13, a2: v14, a3: 499096, a4: 499080);
      MEMORY[0x337db0]/* 0x337db0 */ = 2;
      LOBYTE(v13) = 0;
    }
  }
  LOBYTE(v12) = v6;
  sub_132C972C(a1: v13, a2: v14, a3: v11, a4: v12);
  if ( v19 != 0 )
    return 0;
  v20 = (_QWORD *)sub_1932C9980();
  if ( *v20 != 0 && (unsigned __int8)sub_132C9694(a1: v22, a2: v23, a3: v21, a4: v20) != 0 )
    MEMORY[0x79d60]/* 0x79d60 */(a1: v24, a2: v25, a3: 2, a4, a5: v25);
  ++MEMORY[0x337838]/* 0x337838 */;
  return 1;
}
