// sub_181599C60
// rva 0x01599c60  size 495  section .text  group text
// window base 0x181599c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181599C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 i; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // [rsp+0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  __int64 v38; // [rsp+20h] [rbp-48h]
  unsigned int v39; // [rsp+2Ch] [rbp-3Ch]
  __int64 v40; // [rsp+30h] [rbp-38h]
  __int64 v41; // [rsp+38h] [rbp-30h]
  __int64 v42; // [rsp+40h] [rbp-28h]
  int v43; // [rsp+4Ch] [rbp-1Ch]
  int v44; // [rsp+50h] [rbp-18h]
  unsigned int v45; // [rsp+54h] [rbp-14h]
  __int64 v46; // [rsp+58h] [rbp-10h]
  unsigned int v47; // [rsp+60h] [rbp-8h]
  unsigned int v48; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v8 + 8) )
  {
    v48 = a2;
    v47 = a1;
    v46 = a6;
    v41 = a5;
    v40 = a3;
    MEMORY[0x181EB83C0]();
  }
  else
  {
    result = *(unsigned int *)(v7 + 376612716);
    v42 = v7 + 8 * result;
    if ( (_DWORD)result == 0 )
    {
      v48 = a2;
      v47 = a1;
      v46 = a6;
      v41 = a5;
      v40 = a3;
LABEL_11:
      if ( *(int *)(v8 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    }
    if ( a5 != v7 )
    {
      v39 = result;
      v48 = a2;
      v47 = a1;
      v46 = a6;
      v41 = a5;
      v40 = a3;
      v38 = v7 + 376612120;
      MEMORY[0x182084840](a1, a2, a3: v7 + 376612120, a4: v7 + 8 * result, a5: v7 + 371383072);
      v12 = *(unsigned int *)(v7 + 8LL * v39 + 8);
      v45 = v12;
      if ( (_DWORD)v12 != 0 )
      {
        v13 = *(unsigned int *)(v7 + 8LL * v39 + 12);
        v37 = v7 + 372709944;
        v36 = v7 + 8 * v13;
        v14 = MEMORY[0x182084840](a1: v10, a2: v11, a3: v38, a4: v12, a5: v7 + 372709944);
        v18 = MEMORY[0x182084840](a1: v16, a2: v17, a3: v14, a4: v15, a5: v36);
        v35 = v7 + 372709880;
        MEMORY[0x182084840](a1: v19, a2: v20, a3: v18, a4: v7 + 372709880, a5: v7 + 372709880);
        for ( i = 1; ; i = (unsigned int)(v43 + 1) )
        {
          v11 = v37;
          v6 = v42;
          if ( (int)v45 <= (int)i )
            break;
          if ( v45 <= (unsigned int)i )
            goto LABEL_19;
          v36 = v7 + 8LL * *(unsigned int *)(v42 + 4 * i + 12);
          v43 = i;
          v22 = MEMORY[0x182084840](a1: v10, a2: v37, a3: v38, a4: v45, a5: v37);
          v26 = MEMORY[0x182084840](a1: v24, a2: v25, a3: v22, a4: v23, a5: v36);
          MEMORY[0x182084840](a1: v28, a2: v29, a3: v26, a4: v27, a5: v35);
        }
        v44 = i;
        v30 = v38;
      }
      else
      {
        v44 = 0;
        v30 = v38;
      }
      v31 = MEMORY[0x1820841E0](a1: v10, a2: v11, a3: v30);
      result = MEMORY[0x1820841E0](a1: v32, a2: v33, a3: v31);
      goto LABEL_11;
    }
  }
  v48 = a2;
  v47 = a1;
  v46 = a6;
  v40 = a3;
  LODWORD(i) = MEMORY[0x18276EFE0]();
LABEL_19:
  MEMORY[0x18276F0E0](a1: v47, a2: v48, a3: (unsigned int)i, a4: v6, a5: v41, a6: v46);
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
  return sub_181599E60();
}
