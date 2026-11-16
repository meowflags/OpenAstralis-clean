// sub_2778240
// rva 0x02778240  size 67  section .text  group text
// window base 0x182778240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778240(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  _QWORD *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 (*v19)(void); // rbx
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  int v23; // edx
  int v24; // ecx
  int v25; // edi
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  char vars0; // [rsp+8h] [rbp+0h] BYREF
  char *vars8; // [rsp+10h] [rbp+8h]
  _QWORD *vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 (*vars20)(void); // [rsp+28h] [rbp+20h]
  void *vars28; // [rsp+30h] [rbp+28h]
  char *vars30; // [rsp+38h] [rbp+30h]
  void *retaddr; // [rsp+40h] [rbp+38h]

  if ( (unsigned __int64)&vars0 <= *(_QWORD *)(v16 + 8) )
  {
    vars8 = &vars0;
    *(double *)a4.m128_u64 = sub_1EB84E0();
  }
  else
  {
    v17 = (__int64)retaddr;
    if ( a3 != v15 )
    {
      v18 = a3[6];
      v19 = (__int64 (*)(void))a3[5];
      v20 = a3[4];
      vars8 = &vars0;
      vars30 = &a15;
      vars28 = retaddr;
      vars20 = v19;
      vars18 = v20;
      vars10 = a3;
      sub_1EBE6C0(a1: retaddr, a2: v20, a3, a4: retaddr, a5: v18, a6: &a15);
      v21 = vars10;
      vars10[5] = 0;
      v21[4] = 0;
      v21[6] = 0;
      vars30 = (char *)vars20;
      return vars20();
    }
  }
  vars8 = &vars0;
  sub_2771080(
    a1,
    a2,
    (__int64)a3,
    a4: v17,
    a5: a13,
    a6: a14,
    a7: a4,
    a8: a5,
    a9: a6,
    a10: a7,
    a11: a8,
    a12: a9,
    a13: a10,
    a14: a11,
    a15: vars0);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2778300(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27, a6: v28, a7: a15);
}
