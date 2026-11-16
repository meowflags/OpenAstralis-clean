// sub_181EA3D20
// rva 0x01ea3d20  size 186  section .text  group text
// window base 0x181ea3d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA3D20(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  double v10; // xmm0_8
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v15);
    goto LABEL_12;
  }
  MEMORY[0x1827816A0](a1, a2, a3: v6 + 366625984);
  if ( *(int *)(v7 + 336) < 1 )
  {
LABEL_12:
    MEMORY[0x1828C1C40](a1: v8, a2: v9, a3: v6 + 368616744, a4: v10);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_181EA3DE0)();
  }
  result = *(_QWORD *)(v6 + 376178832);
  if ( result != 0 )
  {
    v16 = *(_QWORD *)(v6 + 376178832);
    sub_181EA3DE0(a1: v8, a2: v9, a3: v16);
    result = v16;
    v14 = *(_QWORD *)(v16 + 256);
    while ( v14 != 0 )
    {
      v16 = v14;
      sub_181EA3DE0(a1: v12, a2: v13, a3: v14);
      result = *(_QWORD *)(v16 + 256);
      if ( *(int *)(v7 + 16) <= 0 )
      {
        result = MEMORY[0x18277F280]();
        v14 = result;
      }
      else
      {
        v14 = *(_QWORD *)(v16 + 256);
      }
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
