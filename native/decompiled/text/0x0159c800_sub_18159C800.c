// sub_18159C800
// rva 0x0159c800  size 636  section .text  group text
// window base 0x18159c800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159C800(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14)
{
  char *v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  char *v17; // rcx
  char *v19; // rdx
  __int64 v20; // r8
  char *v21; // rdx
  char *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  _QWORD v32[5]; // [rsp+0h] [rbp-48h] BYREF
  char *v33; // [rsp+28h] [rbp-20h]
  char *v34; // [rsp+30h] [rbp-18h]
  char *v35; // [rsp+38h] [rbp-10h]
  char *v36; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)v32 <= *(_QWORD *)(v16 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18159CA80();
  }
  v36 = a6;
  if ( a6 == v14 )
  {
    MEMORY[0x182084840](a1, a2, a3: v15 + 376612120, a4, a5: v15 + 360716592);
    if ( *(int *)(v16 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  else
  {
    v17 = *(char **)(v15 + 376178840);
    if ( v17 == nullptr )
    {
LABEL_4:
      if ( *(int *)(v16 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 0;
    }
    if ( v17 == a6 )
    {
      v35 = *(char **)(v15 + 376178840);
LABEL_24:
      MEMORY[0x182084840](a1, a2, a3: v15 + 376612120, a4: v17, a5: v15 + 360716968);
      if ( *(int *)(v16 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v24, a2: v25, a3: v23, a4: v35);
      return 1;
    }
    else
    {
      v19 = v17 + 230;
      if ( v17 > a6 || v19 <= a6 )
      {
        v20 = *((_QWORD *)v17 + 10);
        a2 = &a6[-v20];
        if ( *((_QWORD *)v17 + 9) > (unsigned __int64)&a6[-v20] )
          return sub_18159C994(
                   a1,
                   (_DWORD)a2,
                   a3: (_DWORD)v19,
                   a4: (_DWORD)v17,
                   a5: v20,
                   (_DWORD)a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12,
                   a13,
                   a14);
        v21 = *((char **)v17 + 20);
        while ( v21 != nullptr )
        {
          if ( v21 == a6 )
          {
            v35 = v21;
            goto LABEL_24;
          }
          v17 = v21 + 230;
          if ( v21 <= a6 && v17 > a6 )
          {
            v34 = v21 + 230;
            v33 = v21;
            goto LABEL_29;
          }
          a2 = &a6[-*((_QWORD *)v21 + 10)];
          if ( *((_QWORD *)v21 + 9) > (unsigned __int64)a2 )
          {
            v32[4] = v21 + 230;
            v32[3] = v21;
            JUMPOUT(0x18159C99ELL);
          }
          if ( *(int *)(v16 + 16) <= 0 )
          {
            MEMORY[0x18277F280](a1, a2, a3: v21, a4: v17, a5: *((_QWORD *)v21 + 20));
            v21 = v22;
          }
          else
          {
            v21 = *((char **)v21 + 20);
          }
        }
        goto LABEL_4;
      }
      v34 = v17 + 230;
      v33 = v17;
LABEL_29:
      v26 = MEMORY[0x182084840](a1, a2, a3: v15 + 376612120, a4: v17, a5: v15 + 352678352);
      MEMORY[0x182084BC0](a1: v28, a2: v29, a3: v26, a4: v27, a5: v33);
      if ( *(int *)(v16 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v30, a2: v31, a3: v33, a4: v34);
      return 1;
    }
  }
}
