// sub_1827736E0
// rva 0x027736e0  size 213  section .text  group text
// window base 0x1827736e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827736E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  _BYTE v27[32]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-18h]
  __int64 v31; // [rsp+58h] [rbp-10h]
  __int64 v32; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v18 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return ((__int64 (*)(void))sub_1827737C0)();
  }
  else if ( a2 != 0 )
  {
    v30 = a6;
    v26 = a5;
    v25 = a3;
    v19 = a1 - *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 192);
    v32 = a2;
    v29 = v19;
    v31 = a1;
    v28 = v27;
    MEMORY[0x1815B1540](a1, a2, a3: a2, a4: v19, a5: v19, a6: v27);
    v28 = (_QWORD *)(*v28 & 0xFFFFFFFFFFFFFFF8LL);
    result = sub_1827737C0(a1: v31, a2: v28, a3: v25, a4: v20, a5: v26, a6: v30);
    if ( *(int *)(v18 + 16) <= 0 )
      return sub_18277F280(a1: v22, a2: v23, a3: v28);
  }
  else
  {
    return sub_182773781(a1, a2: 0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
  }
  return result;
}
