// sub_185038020
// rva 0x05038020  size 614  section .text  group text
// window base 0x185038020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185038020(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  _DWORD *v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v29; // [rsp+8h] [rbp-40h]
  _DWORD *v30; // [rsp+10h] [rbp-38h]
  _DWORD *v31; // [rsp+18h] [rbp-30h]
  __int64 v32; // [rsp+20h] [rbp-28h]
  _DWORD *v33; // [rsp+28h] [rbp-20h]
  int v34; // [rsp+30h] [rbp-18h]
  unsigned int i; // [rsp+34h] [rbp-14h]
  unsigned int (__fastcall *v36)(_DWORD *, __int64, _DWORD *, __int64); // [rsp+38h] [rbp-10h]
  unsigned int v37; // [rsp+40h] [rbp-8h]
  signed int v38; // [rsp+44h] [rbp-4h]

  v33 = a3;
  v32 = a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v9 + 8) )
  {
    v31 = a1;
    v37 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_30;
  }
  v10 = (unsigned int)a3[1];
  v11 = (__int64)&v8[2 * v10];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_30:
    v31 = a1;
    MEMORY[0x182771080](a1, a2, a3, a4: v11);
    goto LABEL_31;
  }
  v30 = &v8[2 * v10];
  v38 = v30[2];
  if ( a1 == v8 )
  {
LABEL_4:
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v11);
    return (__int64)v8;
  }
  v37 = a6;
  v36 = (unsigned int (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64))(v7 + *(_QWORD *)&v8[2 * (*a1 >> 3) + 44]);
  v31 = a1;
  if ( v36(a1, a2: a5, a3: a1, a4: v11) != 0 )
  {
    v18 = v31;
    v19 = v37;
LABEL_9:
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v18, a2: v16, a3: v13, a4: v30, a5: v17, a6: v19);
    return (__int64)v18;
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))v36)(
         a1: v15,
         a2: v16,
         a3: v31,
         a4: v14,
         a5: v8) != 0 )
  {
    sub_185037B00(
      (__int64)a1,
      a2,
      a3: (__int64)v33,
      a4: v20,
      a5: v37,
      a6: v21,
      a7: v28,
      a8: (int)v29,
      a9: (__int64)v30,
      a10: (int)v31,
      a11: v32,
      a12: (int)v33,
      a13: v34,
      a14: (int)v36);
    v22 = v37;
    v6 = v38;
  }
  else
  {
    v6 = v38;
    LODWORD(v22) = v37 + 1;
    if ( v38 <= (int)(v37 + 1) )
      JUMPOUT(0x30A053209LL);
    v22 = (unsigned int)v22;
  }
  if ( v6 > (unsigned int)v22 )
  {
    a3 = &v8[2 * v30[v22 + 3]];
    for ( i = v22; ; i = v27 )
    {
      if ( a3 == v8 )
      {
        v11 = (__int64)v30;
        goto LABEL_4;
      }
      v36 = (unsigned int (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64))(v7 + *(_QWORD *)&v8[2 * (*a3 >> 3) + 44]);
      v29 = a3;
      if ( ((unsigned int (__fastcall *)(__int64))v36)(a1: v32) != 0 )
        break;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *))v36)(
             a1: v24,
             a2: v16,
             a3: v29,
             a4: v23,
             a5: v8) != 0 )
      {
        sub_185037B00(
          (__int64)a1,
          a2,
          a3: (__int64)v33,
          a4: v25,
          a5: i,
          a6: v26,
          a7: v28,
          a8: (int)v29,
          a9: (__int64)v30,
          a10: (int)v31,
          a11: v32,
          a12: (int)v33,
          a13: v34,
          a14: (int)v36);
        v27 = i;
        v6 = v38;
      }
      else
      {
        v6 = v38;
        LODWORD(v27) = i + 1;
        if ( v38 <= (int)(i + 1) )
          JUMPOUT(0x30A0531DELL);
        v27 = (unsigned int)v27;
      }
      if ( v6 <= (unsigned int)v27 )
        goto LABEL_32;
      a3 = &v8[2 * v30[v27 + 3]];
    }
    v18 = v29;
    v19 = i;
    goto LABEL_9;
  }
LABEL_31:
  LODWORD(v27) = MEMORY[0x182771220](a1: v31, a2, a3: (unsigned int)v22, a4: v30, a5: v6);
LABEL_32:
  MEMORY[0x182771220](a1: v29, a2: v33, a3: (unsigned int)v27, a4: v30, a5: v6);
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
  return sub_1850382A0();
}
