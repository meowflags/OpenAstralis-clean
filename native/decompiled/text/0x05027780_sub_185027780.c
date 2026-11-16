// sub_185027780
// rva 0x05027780  size 199  section .text  group text
// window base 0x185027780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185027780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned int v12; // r10d
  __int64 result; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-68h] BYREF
  int v15; // [rsp+10h] [rbp-58h]
  int v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]
  __int64 v23; // [rsp+58h] [rbp-10h]
  __int64 v24; // [rsp+60h] [rbp-8h]

  v24 = a3;
  if ( (unsigned __int64)v14 <= *(_QWORD *)(v11 + 8) )
  {
    v19 = a10;
    v18 = a4;
    v21 = a1;
    v22 = a6;
    v23 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a2 != v10 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v23 = a5;
    v22 = a6;
    v21 = a1;
    v20 = a2;
    v14[1] = a4;
    v15 = a8;
    v16 = a9;
    v17 = a10;
    v19 = a10;
    v18 = a4;
    result = MEMORY[0x184F6F8C0](a1: a2, a2: 0, a3: a5, a4: v12, a5: a6, a6: a1);
    if ( *(int *)(v11 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_185027860();
}
