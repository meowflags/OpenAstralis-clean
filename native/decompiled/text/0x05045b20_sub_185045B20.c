// sub_185045B20
// rva 0x05045b20  size 774  section .text  group text
// window base 0x185045b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185045B20(signed __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int (__fastcall *v9)(signed __int64, __int64, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned __int64 v18; // rbp
  int v19; // edx
  __int64 v20; // r8
  int v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+8h] [rbp-30h]
  __int64 v23; // [rsp+10h] [rbp-28h]
  unsigned int v24; // [rsp+1Ch] [rbp-1Ch]
  __int64 v25; // [rsp+20h] [rbp-18h]
  unsigned int v26; // [rsp+2Ch] [rbp-Ch]
  __int64 v27; // [rsp+30h] [rbp-8h]

  v25 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_48;
  }
  v7 = *(unsigned int *)(v6 + 72);
  *(_DWORD *)(a3 + 116) = v7;
  __faststorefence();
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v18 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) = 0;
  }
  v24 = v7;
  v3 = v5 + 8 * v7;
  if ( *(_BYTE *)(a3 + 100) == 0 )
  {
    if ( (_DWORD)v7 == 0 )
    {
LABEL_50:
      v23 = v3;
      MEMORY[0x182771080]();
      goto LABEL_51;
    }
    v9 = (unsigned int (__fastcall *)(signed __int64, __int64, __int64))(v4
                                                                       + *(_QWORD *)(v5
                                                                                   + 8LL
                                                                                   * (*(_DWORD *)(v5 + 8 * v7) >> 3)
                                                                                   + 256));
    v23 = v5 + 8 * v7;
    if ( v9(a1, a2, a3: v23) == 0 )
    {
      v7 = v24;
      a3 = v25;
      goto LABEL_7;
    }
    a3 = v25;
    v10 = *(unsigned int *)(v25 + 28);
    v11 = v5 + 8 * v10;
    v22 = v11;
    if ( (_DWORD)v10 == 0 )
    {
LABEL_51:
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
      __builtin_debugtrap();
      return sub_185045E40();
    }
    v12 = *(_DWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 8 * v10) >> 3) + 48);
    if ( v12 != 0 )
    {
      a2 = *(unsigned int *)(v11 + (int)v12);
      if ( (_DWORD)a2 != 0 && v6 != *(_QWORD *)(v5 + 376351704) )
      {
        a1 = *(_QWORD *)(v6 + 64);
        v13 = *(_QWORD *)(v5 + 8 * a2 + 16);
        if ( v13 != 0 )
        {
          if ( v13 == a1 )
          {
            v19 = *(_DWORD *)(v5 + 8 * a2 + 28) + 1;
            if ( v19 >= 0 )
            {
              *(_DWORD *)(v5 + 8 * a2 + 28) = v19;
              v27 = (int)v12;
              v26 = v12;
              a3 = v25;
LABEL_19:
              if ( *(_BYTE *)(a3 + 100) != 0 )
              {
                v3 = v26;
                v7 = v24;
              }
              else
              {
                v7 = v24;
                if ( *(_BYTE *)(v5 + 8LL * v24 + 100) != 0 )
                {
                  *(_BYTE *)(v5 + 8LL * v24 + 100) = 0;
                  __faststorefence();
                }
                v3 = v26;
              }
              if ( (_DWORD)v3 != 0 )
              {
                v14 = v22;
                v15 = *(unsigned int *)(v22 + v27);
                v3 = *(unsigned int *)(v5 + 8 * v15 + 28);
                if ( (_DWORD)v3 == 1 )
                {
                  *(_QWORD *)(v5 + 8 * v15 + 16) = 0;
                  __faststorefence();
                }
                else
                {
                  *(_DWORD *)(v5 + 8 * v15 + 28) = v3 - 1;
                }
                if ( (_DWORD)v3 != 1 )
                  goto LABEL_7;
                v16 = *(unsigned int *)(v5 + 8 * v15 + 4);
                if ( (_DWORD)v16 == 0 )
                  goto LABEL_7;
                v17 = *(unsigned int *)(v5 + 8 * v16 + 8);
                if ( (_DWORD)v17 == 0 || *(_DWORD *)(v5 + 8 * v17 + 16) == 0 )
                  goto LABEL_7;
                v20 = 1;
              }
              else
              {
                v20 = 0xFFFFFFFFLL;
                v14 = v22;
              }
              MEMORY[0x18208CCA0](a1, a2, a3: v14, a4: v7, a5: v20);
              v7 = v24;
              a3 = v25;
              goto LABEL_7;
            }
          }
        }
        else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v5 + 8 * a2 + 16), 0, a1) == 0 )
        {
          v27 = (int)v12;
          v26 = v12;
          goto LABEL_19;
        }
      }
    }
    v27 = (int)v12;
    v26 = v12;
    MEMORY[0x18208CC20](a1, a2, a3: v11);
    a3 = v25;
    goto LABEL_19;
  }
  if ( (_DWORD)v7 == 0 )
  {
LABEL_49:
    v23 = v3;
    MEMORY[0x182771080]();
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v5 + 8 * v7 + 100) != 0 )
  {
    v23 = v5 + 8 * v7;
  }
  else
  {
    v23 = v5 + 8 * v7;
    *(_BYTE *)(v23 + 100) = 1;
    __faststorefence();
    sub_18502FCC0(a1, a2, a3: v23);
    v7 = v24;
    a3 = v25;
  }
LABEL_7:
  if ( (_DWORD)v7 == 0 )
  {
LABEL_48:
    MEMORY[0x182771080](a1, a2, a3);
    goto LABEL_49;
  }
  result = ((__int64 (__fastcall *)(signed __int64, __int64, __int64, __int64, __int64))(v4
                                                                                       + *(_QWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 8 * v7) >> 3) + 312)))(
             a1,
             a2,
             a3: v23,
             a4: a3,
             a5: a3);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
