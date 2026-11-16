// sub_181EC96A0
// rva 0x01ec96a0  size 553  section .text  group text
// window base 0x181ec96a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC96A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  char v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  unsigned int v29; // [rsp+24h] [rbp-14h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+30h] [rbp-8h]

  v31 = a3;
  v30 = a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v26);
LABEL_32:
    v21 = (_DWORD *)MEMORY[0x182771080]();
LABEL_33:
    MEMORY[0x18276FC00](a1: v19, a2: v20, a3: v21, a4: v30, a5: v6 + 10117358);
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
    return ((__int64 (*)(void))sub_181EC98E0)();
  }
  else
  {
    v8 = MEMORY[0x1827CF6A0](a1, a2, a3: v6 + 94164922);
    if ( (_DWORD *)v8 == v6 )
    {
      v15 = *(unsigned int *)(v31 + 8);
      if ( (_DWORD)v15 != 0 )
      {
        v16 = (unsigned int)v6[2 * v15 + 6];
        if ( (_DWORD)v16 != 0 )
        {
          v17 = (__int64)&v6[2 * v16];
        }
        else
        {
          v17 = *(_QWORD *)(v7 + 40);
          if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v7 + 32) )
          {
            v29 = *(_DWORD *)(v31 + 8);
            v17 = sub_181EAA920(a1: v10, a2: v11, a3: 35797992);
            v15 = v29;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v17 + 24;
            *(_DWORD *)v17 = 35797992;
            *(_DWORD *)(v17 + 4) = 0;
            *(_QWORD *)(v17 + 8) = 0;
            *(_QWORD *)(v17 + 16) = 0;
          }
          *(_DWORD *)(v17 + 4) = v15;
          v6[2 * v15 + 6] = (unsigned __int64)(v17 - (_QWORD)v6) >> 3;
          v23 = (unsigned __int64)&v6[2 * v15];
          if ( (*(_DWORD *)v23 & 2) != 0 )
          {
            v24 = v23 & 0xFFFFFFFFFFF80000LL;
            v25 = (v23 - ((v23 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
            if ( *(_BYTE *)(v24 + v25 + 56) != 0 )
              *(_BYTE *)(v24 + v25 + 56) = 0;
          }
        }
        v18 = MEMORY[0x1859D57A0](a1: v10, a2: v11, a3: v17);
        v28 = v18;
        while ( *(_DWORD *)(v18 + 8) != 0 )
        {
          v21 = (_DWORD *)MEMORY[0x1859D4BE0](a1: v19, a2: v20, a3: v18);
          if ( v21 != v6 && *v21 >> 3 != 5058679 )
            goto LABEL_33;
          if ( v21 == v6 )
            goto LABEL_32;
          if ( v21[2] == *(_DWORD *)(v30 + 8) )
          {
            v27 = v21;
            if ( (unsigned int)MEMORY[0x1827C5800](a1: v19, a2: v20, a3: v21, a4: v30) != 0 )
            {
              result = sub_181EC98E0(a1: v19, a2: v20, a3: v31, a4: v22, a5: v27);
              if ( *(int *)(v7 + 16) <= 0 )
                return MEMORY[0x18277F280]();
              return result;
            }
            v18 = v28;
          }
          else
          {
            v18 = v28;
          }
        }
      }
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return (__int64)v6;
    }
    else
    {
      v28 = v8;
      result = sub_181EC98E0(a1: v10, a2: v11, a3: v31, a4: v9, a5: v8);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v13, a2: v14, a3: v28);
    }
  }
  return result;
}
