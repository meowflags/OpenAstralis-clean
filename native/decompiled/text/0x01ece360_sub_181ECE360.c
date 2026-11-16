// sub_181ECE360
// rva 0x01ece360  size 390  section .text  group text
// window base 0x181ece360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECE360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // esi
  int v32; // r8d
  int v33; // r9d
  char v34; // [rsp+0h] [rbp-38h] BYREF
  __int64 v35; // [rsp+8h] [rbp-30h]
  __int64 v36; // [rsp+10h] [rbp-28h]
  __int64 v37; // [rsp+18h] [rbp-20h]
  __int64 v38; // [rsp+20h] [rbp-18h]
  __int64 v39; // [rsp+28h] [rbp-10h]
  unsigned int v40; // [rsp+30h] [rbp-8h]
  unsigned int v41; // [rsp+34h] [rbp-4h]

  v39 = a5;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v8 + 8) )
  {
    v38 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v34);
    goto LABEL_15;
  }
  v9 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_15:
    v38 = a3;
    MEMORY[0x182771080]();
    goto LABEL_16;
  }
  v38 = a3;
  v10 = MEMORY[0x1827C6220](a1, a2, a3: v7 + 8 * v9);
  result = MEMORY[0x18657C2C0](a1: v12, a2: v13, a3: v10, a4: v11, a5: 1, a6: 1);
  if ( *(_BYTE *)(v39 + 20) != 0 )
  {
    if ( result != v7 )
    {
      v17 = *(unsigned int *)(result + 4);
      if ( (_DWORD)v17 != 0 )
      {
        v18 = *(_DWORD *)(v7 + 8 * v17 + 8);
        v19 = (unsigned int)*(char *)(result + 12);
        v20 = (v18 >> *(_BYTE *)(result + 12)) - 1;
        v37 = result;
        v41 = MEMORY[0x184FF7A20](a1: v15, a2: v16, a3: result, a4: v19, a5: 43, a6: v20);
        v23 = MEMORY[0x184FFDC80](a1: v21, a2: v22, a3: v37);
        v26 = *(unsigned int *)(v23 + 8);
        if ( (unsigned int)v26 > v41 )
        {
          *(_WORD *)(v23 + 2LL * v41 + 12) = 47;
          v27 = *(_QWORD *)(v8 + 40);
          if ( (unsigned __int64)(v27 + 24) > *(_QWORD *)(v8 + 32) )
          {
            v40 = v26;
            v36 = v23;
            v27 = sub_181EAA920(a1: v24, a2: v25, a3: 34082680);
            v26 = v40;
            v23 = v36;
          }
          else
          {
            *(_QWORD *)(v8 + 40) = v27 + 24;
            *(_DWORD *)v27 = 34082680;
            *(_DWORD *)(v27 + 4) = 0;
            *(_QWORD *)(v27 + 8) = 0;
            *(_QWORD *)(v27 + 16) = 0;
          }
          v36 = v23;
          v35 = v27;
          MEMORY[0x184FE8D60](a1: (unsigned int)v26, a2: v7, a3: v27, a4: v26, a5: v23, a6: 0);
          result = v35;
          goto LABEL_10;
        }
LABEL_18:
        MEMORY[0x182771220](a1: v38, a2: v37, a3: v41, a4: v26, a5: (unsigned int)v26);
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
        return sub_181ECE500(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32, a6: v33, a7);
      }
LABEL_17:
      v37 = result;
      MEMORY[0x182771080]();
      goto LABEL_18;
    }
LABEL_16:
    result = MEMORY[0x182771080]();
    goto LABEL_17;
  }
LABEL_10:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
