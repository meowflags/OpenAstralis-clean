// sub_185038300
// rva 0x05038300  size 606  section .text  group text
// window base 0x185038300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185038300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // ebx
  __int64 v15; // r13
  _DWORD *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  _DWORD *v22; // rsi
  unsigned int (__fastcall *v23)(__int64, _DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *); // rbp
  __int64 v24; // rdi
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r9
  __int64 result; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // [rsp+0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+8h] [rbp-40h]
  _DWORD *v38; // [rsp+10h] [rbp-38h]
  __int64 v39; // [rsp+18h] [rbp-30h]
  __int64 v40; // [rsp+20h] [rbp-28h]
  _DWORD *v41; // [rsp+28h] [rbp-20h]
  unsigned int v42; // [rsp+30h] [rbp-18h]
  unsigned int v43; // [rsp+38h] [rbp-10h]
  unsigned int v44; // [rsp+3Ch] [rbp-Ch]
  __int64 v45; // [rsp+40h] [rbp-8h]

  v41 = a5;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v17 + 8) )
  {
    v39 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v18 = *(unsigned int *)(a3 + 4);
  v19 = (__int64)&v16[2 * v18];
  v40 = v19;
  if ( (_DWORD)v18 == 0 )
  {
LABEL_11:
    v39 = a3;
    MEMORY[0x182771080]();
    goto LABEL_12;
  }
  v14 = v16[2 * v18 + 2];
  v44 = v14;
  if ( a5 == v16 )
  {
LABEL_12:
    v39 = a3;
    LODWORD(v20) = MEMORY[0x182771080]();
    goto LABEL_13;
  }
  v20 = a5[1] & (v14 - 1);
  if ( v14 <= (unsigned int)v20 )
  {
LABEL_13:
    v39 = a3;
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v20, a4: v19, a5: v44);
    goto LABEL_14;
  }
  v21 = *(unsigned int *)(v19 + 4 * v20 + 12);
  v22 = &v16[2 * v21];
  if ( (_DWORD)v21 == 0 )
    return sub_1850383F5(a1, a2: (_DWORD)v22, a3, a4: v19, (_DWORD)a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v43 = a5[1] & (v14 - 1);
  v39 = a3;
  v23 = (unsigned int (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *))(v15
                                                                                              + *(_QWORD *)&v16[2 * (v16[2 * v21] >> 3) + 44]);
  v38 = v22;
  if ( v23(a1, a2: v22, a3: v22, a4: v19, a5, a6: a5) == 0 )
    JUMPOUT(0x18503840BLL);
  v25 = v38;
  v45 = v15;
  v42 = v43;
  v14 = v44;
  v26 = v40;
  if ( v38 == v16 )
  {
LABEL_14:
    MEMORY[0x182771080](a1: v24, a2: v25, a3: v42, a4: v26);
    v35 = MEMORY[0x182771220](a1: v34, a2: v38, a3: (unsigned int)v33, a4: v33, a5: v44);
    MEMORY[0x182771220](a1: v39, a2: v41, a3: v35, a4: v40, a5: v14);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185038560();
  }
  ((void (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64))(v15 + *(_QWORD *)&v16[2 * (*v38 >> 3) + 28]))(
    a1: v24,
    a2: v38,
    a3: v38,
    a4: v40);
  result = sub_185037B00(
             a1: v28,
             a2: v29,
             a3: v39,
             a4: v27,
             a5: v42,
             a6: v30,
             a7: v36,
             a8: v37,
             a9: (__int64)v38,
             a10: v39,
             a11: v40,
             a12: (int)v41,
             a13: v42,
             a14: v43);
  if ( *(int *)(v17 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v32, a2: v38);
  return result;
}
