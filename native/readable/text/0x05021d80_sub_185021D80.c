// sub_5021D80
// rva 0x05021d80  size 239  section .text  group text
// window base 0x185021d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5021D80(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int16 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  unsigned int v16; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v18; // [rsp+24h] [rbp-14h]
  int v19; // [rsp+28h] [rbp-10h]
  int v20; // [rsp+2Ch] [rbp-Ch]
  int v21; // [rsp+30h] [rbp-8h]
  int v22; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v22 = a4;
    v21 = a2;
    v20 = a1;
    v19 = a6;
    v10 = *(_DWORD *)(a3 + 8) >> 1;
    v15 = a3;
    v18 = a5;
    v16 = v10;
    sub_632A360(a1: v8 + 376643464, a2, a3: a5, a4, a5: a5 + 5, a6: v10);
    v11 = v15;
    *(_WORD *)(v15 + (int)(2 * v18) + 12) = v19;
    *(_WORD *)(v11 + (int)(2 * (v18 + 1)) + 12) = v20;
    v12 = v18;
    *(_WORD *)(v11 + (int)(2 * (v18 + 2)) + 12) = v21;
    *(_WORD *)(v11 + (int)(2 * (v12 + 3)) + 12) = v22;
    result = (int)(2 * (v12 + 4));
    *(_WORD *)(v11 + result + 12) = a8;
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  return sub_5021E80();
}
