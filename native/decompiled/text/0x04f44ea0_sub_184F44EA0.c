// sub_184F44EA0
// rva 0x04f44ea0  size 792  section .text  group text
// window base 0x184f44ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F44EA0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // r8d
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 i; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+10h] [rbp-18h]
  _DWORD *v29; // [rsp+18h] [rbp-10h]
  unsigned int v30; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( HIWORD(a3) < 0x11u )
  {
    if ( (signed int)a3 < *(_DWORD *)(v7 + 377134532) )
    {
      v9 = 0;
      v10 = 194;
    }
    else
    {
      v9 = 194;
      v10 = 389;
    }
    v11 = (v9 + v10) >> 1;
    v12 = v10;
    v13 = v9;
    while ( (int)v12 - v13 >= 2 )
    {
      if ( (unsigned int)v11 >= 0x185 )
      {
        v30 = a3;
        MEMORY[0x182771220](a1, a2, a3: (unsigned int)v11, a4: v12, a5: 389);
        while ( 1 )
        {
          for ( i = MEMORY[0x181EAA920](a1: v19, a2: v20, a3: 34081944); ; *(_QWORD *)(i + 32) = 0 )
          {
            *(_DWORD *)(i + 20) = 46923644;
            *(_DWORD *)(i + 16) = *(_DWORD *)(v7 + 374343896);
            *(_DWORD *)(i + 12) = (unsigned __int64)(i - v7) >> 3;
            v29 = (_DWORD *)i;
            MEMORY[0x18503B9A0](a1: v19, a2: v20, a3: i, a4: i, a5: 0);
            v24 = (unsigned __int64)v29;
            v29[2] = (unsigned __int64)(v28 - v7) >> 3;
            if ( (*(_DWORD *)v24 & 2) != 0 )
            {
              v26 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v26) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v26) >> 9) + 0x38) = 0;
            }
            MEMORY[0x182769900](a1: v22, a2: v23, a3: v24, a4: v24, a5: &a7);
LABEL_28:
            MEMORY[0x182771220](a1, a2, a3: (unsigned int)v11, a4: v12, a5: 389);
LABEL_29:
            v17 = a3;
            v25 = *(_QWORD *)(v8 + 40);
            if ( (unsigned __int64)(v25 + 16) > *(_QWORD *)(v8 + 32) )
            {
              v30 = v17;
              v25 = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
              v17 = v30;
            }
            else
            {
              *(_QWORD *)(v8 + 40) = v25 + 16;
              *(_DWORD *)v25 = 34086464;
              *(_DWORD *)(v25 + 4) = 0;
              *(_QWORD *)(v25 + 8) = 0;
            }
            *(_DWORD *)(v25 + 4) = v17;
            v16 = v25;
LABEL_22:
            v18 = *(_QWORD *)(v8 + 40);
            if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v8 + 32) )
            {
              v29 = (_DWORD *)v16;
              v30 = v17;
              v18 = MEMORY[0x181EAA840](a1: 34084944, a2, a3: 34084944, a4, a5: 2);
              v16 = (__int64)v29;
            }
            else
            {
              *(_QWORD *)(v8 + 40) = v18 + 24;
              *(_QWORD *)v18 = 34084944;
              *(_DWORD *)(v18 + 8) = 2;
              *(_DWORD *)(v18 + 12) = 0;
              *(_QWORD *)(v18 + 16) = 0;
              v30 = v17;
            }
            v29 = (_DWORD *)v18;
            *(_DWORD *)(v18 + 16) = (unsigned __int64)(v16 - v7) >> 3;
            *(_DWORD *)(v18 + 12) = 7533399;
            v28 = MEMORY[0x1827768E0](a1: v18, a2, a3: 1, a4: v18, a5: v7, a6: v7 + 56620232);
            i = *(_QWORD *)(v8 + 40);
            if ( (unsigned __int64)(i + 40) > *(_QWORD *)(v8 + 32) )
              break;
            *(_QWORD *)(v8 + 40) = i + 40;
            *(_DWORD *)i = 34081944;
            *(_DWORD *)(i + 4) = 0;
            *(_QWORD *)(i + 8) = 0;
            *(_QWORD *)(i + 16) = 0;
            *(_QWORD *)(i + 24) = 0;
          }
        }
      }
      if ( (signed int)a3 < *(_DWORD *)(v7 + 4 * v11 + 377133756) )
        v12 = (unsigned int)v11;
      else
        v13 = v11;
      a1 = (unsigned int)((v13 + (int)v12) / 2);
      if ( *(int *)(v8 + 16) <= 0 )
        v13 = MEMORY[0x18277F280](a1);
      v11 = (unsigned int)a1;
    }
    if ( (unsigned int)v11 >= 0x185 )
      goto LABEL_28;
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v7 + 8LL * *(unsigned int *)(v7 + 4 * v11 + 377135324);
  }
  v15 = a3 + 128;
  if ( (unsigned int)v15 >= 0x100 )
    goto LABEL_29;
  v16 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v15 + 376353204);
  v17 = a3;
  goto LABEL_22;
}
