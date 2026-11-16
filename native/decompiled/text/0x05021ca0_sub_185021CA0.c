// sub_185021CA0
// rva 0x05021ca0  size 212  section .text  group text
// window base 0x185021ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185021CA0(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6, int a7, int a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h]
  unsigned int v22; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v24; // [rsp+24h] [rbp-14h]
  int v25; // [rsp+28h] [rbp-10h]
  int v26; // [rsp+2Ch] [rbp-Ch]
  int v27; // [rsp+30h] [rbp-8h]
  int v28; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    v28 = a4;
    v27 = a2;
    v26 = a1;
    v25 = a6;
    v10 = *(_DWORD *)(a3 + 8) >> 1;
    v21 = a3;
    v24 = a5;
    v22 = v10;
    MEMORY[0x18632A360](a1: v8 + 376643464, a2, a3: a5, a4, a5: a5 + 4, a6: v10);
    v11 = v21;
    *(_WORD *)(v21 + (int)(2 * v24) + 12) = v25;
    *(_WORD *)(v11 + (int)(2 * (v24 + 1)) + 12) = v26;
    v12 = v24;
    *(_WORD *)(v11 + (int)(2 * (v24 + 2)) + 12) = v27;
    result = (int)(2 * (v12 + 3));
    *(_WORD *)(v11 + result + 12) = v28;
    if ( *(int *)(v9 + 16) <= 0 )
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
  return sub_185021D80(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7, a8);
}
