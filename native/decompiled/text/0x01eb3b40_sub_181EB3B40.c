// sub_181EB3B40
// rva 0x01eb3b40  size 511  section .text  group text
// window base 0x181eb3b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB3B40(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 i; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r8d
  char *v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  char *v19; // r8
  char v20; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
    goto LABEL_35;
  }
  v11 = *(unsigned int *)(a3 + 4);
  v12 = v8 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_35:
    MEMORY[0x182771080](a1, a2, a3: v11, a4: v12);
    goto LABEL_36;
  }
  v6 = *(_DWORD *)(v8 + 8 * v11 + 8);
  if ( v6 != 0 )
  {
    *(_DWORD *)(v8 + 8 * v11 + 12) = 47082250;
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      if ( (*(_DWORD *)v12 & 1) != 0 )
      {
        v19 = (char *)(v12 - *(_QWORD *)(v12 - 8));
        if ( v19[48] != 0 )
          v19[48] = 0;
      }
      else
      {
        v18 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v18) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v18) >> 9) + 0x38) = 0;
      }
    }
    i = 1;
    while ( (int)v6 > (int)i )
    {
      if ( v6 <= (unsigned int)i )
        goto LABEL_37;
      *(_DWORD *)(v12 + 4 * i + 12) = 47082250;
      v13 = i + 1;
      if ( (*(_DWORD *)v12 & 2) != 0 )
      {
        if ( (*(_DWORD *)v12 & 1) != 0 )
        {
          v14 = (char *)(v12 - *(_QWORD *)(v12 - 8));
          a2 = v12;
          v15 = (unsigned __int64)(4 * i + 12) >> 9;
          if ( v14[v15 + 48] != 0 )
            v14[v15 + 48] = 0;
          i = v13;
        }
        else
        {
          a2 = (v12 - ((v12 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
          if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + a2 + 0x38) != 0 )
            *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - ((v12 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
          i = v13;
        }
      }
      else
      {
        i = v13;
      }
    }
  }
  v16 = *(unsigned int *)(result + 8);
  v17 = v8 + 8 * v16;
  if ( (_DWORD)v16 != 0 )
  {
    v6 = *(_DWORD *)(v8 + 8 * v16 + 8);
    if ( v6 != 0 )
    {
      *(_QWORD *)(v8 + 8 * v16 + 16) = 0xBAADCAFEBAADCAFELL;
      for ( i = 1; (int)v6 > (int)i; i = (unsigned int)(i + 1) )
      {
        if ( v6 <= (unsigned int)i )
          goto LABEL_38;
        *(_QWORD *)(v17 + 8 * i + 16) = 0xBAADCAFEBAADCAFELL;
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3: v16, a4: v17);
    return result;
  }
LABEL_36:
  MEMORY[0x182771080](a1, a2, a3: v16, a4: v17);
LABEL_37:
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)i, a4: v12, a5: v6);
LABEL_38:
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)i, a4: v17, a5: v6);
  __builtin_debugtrap();
  return sub_181EB3D40();
}
