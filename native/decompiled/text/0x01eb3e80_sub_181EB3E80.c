// sub_181EB3E80
// rva 0x01eb3e80  size 250  section .text  group text
// window base 0x181eb3e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB3E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  char v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  unsigned int v24; // [rsp+14h] [rbp-14h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned int v26; // [rsp+20h] [rbp-8h]
  int v27; // [rsp+24h] [rbp-4h]

  v25 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v22);
    goto LABEL_14;
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_14:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EB3F80(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  v10 = *(_DWORD *)(v7 + 8 * v9 + 12);
  if ( v10 == 0 )
  {
    v10 = *(_DWORD *)(v7 + 8 * v9 + 36);
    if ( v10 == 0 )
    {
      v24 = *(_DWORD *)(a3 + 4);
      v10 = sub_181ED7320(a1, a2, a3: v7 + 8 * v9);
      v9 = v24;
      a3 = v25;
    }
    *(_DWORD *)(v7 + 8 * v9 + 12) = v10;
  }
  v11 = *(unsigned int *)(a3 + 8);
  v12 = 31 * v10;
  if ( (_DWORD)v11 != 0 )
  {
    v27 = 31 * v10;
    v26 = v10;
    v13 = *(_DWORD *)(v7 + 8 * v11 + 8);
    v23 = v7 + 8 * v11;
    v14 = MEMORY[0x18631FDA0](a1: 1, a2, a3: v23, a4, a5: 0, a6: v13);
  }
  else
  {
    v14 = 0;
    v27 = 31 * v10;
    v26 = v10;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    v14 = MEMORY[0x18277F280](a1: v12, a2, a3, a4, a5: v26);
  return (unsigned int)(*(_DWORD *)(v25 + 12) + 31 * (v14 + v27));
}
