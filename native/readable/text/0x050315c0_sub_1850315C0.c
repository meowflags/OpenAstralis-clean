// sub_50315C0
// rva 0x050315c0  size 109  section .text  group text
// window base 0x1850315c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50315C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 result; // rax
  char v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  __int64 v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v19 = a3;
  v10 = sub_5A81840(a1, a2, a3: v8 + 376367304, a4, a5: a3);
  if ( v10 < 0 )
    return sub_185031607(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7, a8);
  v20 = v10;
  result = sub_5031A20(a1: v13, a2: v14, a3: v10, a4: v12, a5: v15, a6: v16, a7: v18);
  if ( *(int *)(v9 + 16) <= 0 )
    JUMPOUT(0x185031618LL);
  return result;
}
