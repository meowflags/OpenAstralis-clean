// sub_18158E3A0
// rva 0x0158e3a0  size 352  section .text  group text
// window base 0x18158e3a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158E3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+0h] [rbp-28h] BYREF
  int v22; // [rsp+24h] [rbp-4h]

  v21[3] = a3;
  v21[2] = a5;
  if ( (unsigned __int64)v21 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_16:
    LODWORD(v18) = MEMORY[0x182771080]();
    goto LABEL_17;
  }
  v22 = a6;
  if ( a6 != 0 )
  {
    v10 = MEMORY[0x181586260](a1, a2, a3, a4: a5);
    v15 = *(_QWORD *)(v9 + 40);
    v16 = v15 + 24;
    if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v9 + 32) )
      return sub_18158E497(a1: v11, a2: v12, a3: v15, a4: v16, a5: v13, a6: v14, a7);
    *(_QWORD *)(v9 + 40) = v16;
    *(_DWORD *)v15 = 35795840;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_BYTE *)(v15 + 8) = MEMORY[0x123F3C30] & v22;
    *(_DWORD *)(v15 + 4) = (unsigned __int64)(v10 - v8) >> 3;
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v15;
  }
  if ( a3 == v8 )
    goto LABEL_16;
  v18 = *(unsigned int *)(a3 + 8);
  if ( (unsigned int)v18 >= 4 )
  {
LABEL_17:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v18, a4, a5: 4);
  }
  else if ( a5 != v8 )
  {
    v19 = *(unsigned int *)(v8 + 4 * v18 + 376611580);
    if ( (_DWORD)v19 == 0 )
    {
LABEL_19:
      MEMORY[0x182771080]();
      goto LABEL_20;
    }
    v20 = *(unsigned int *)(a5 + 8);
    v7 = *(_DWORD *)(v8 + 8 * v19 + 8);
    if ( v7 <= (unsigned int)v20 )
    {
LABEL_20:
      MEMORY[0x182771220](a1, a2, a3: (unsigned int)v20, a4: v20, a5: v7);
      return sub_18158E500();
    }
    if ( *(int *)(v9 + 16) <= 0 )
      v19 = MEMORY[0x18277F280]();
    return v8 + 8LL * *(unsigned int *)(v8 + 8 * v19 + 4 * v20 + 12);
  }
  MEMORY[0x182771080]();
  goto LABEL_19;
}
