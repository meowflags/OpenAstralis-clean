// NET_SockaddrToInetAddress
// rva 0x132a9d88  size 440  section .text  group text
// window base 0x1932a9d88: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall NET_SockaddrToInetAddress(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, _DWORD *a5)
{
  _WORD *v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, __int64, _QWORD); // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  int v16; // edi
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // edi
  int v22; // esi
  int v23; // r9d
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // esi
  int v28; // r9d
  int v29; // edi
  int v30; // esi
  int v31; // r9d
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // edi
  __int64 v35; // rsi
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // esi
  int v42; // r9d
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // eax
  int v49; // edi
  int v50; // esi
  int v51; // r9d
  __int64 v52; // rdi

  if ( *a3 != 23 )
  {
    v40 = (*(__int64 (__fastcall **)(__int64, _WORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)a4 + 224LL))(
            a1,
            a2: a3,
            a3: MEMORY[0x337F50],
            a4,
            a5: MEMORY[0x337F48]);
    if ( v40 == 0 )
      return 0;
    sub_1932AA540(a1: v40, a2: v41, a3: v40, a4, a5: 1, a6: v42);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v43,
           a2: v44,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) != 0 )
      return 0;
    v48 = MEMORY[0x79930](a1: v46, a2: v47, a3: v45, a4: *(unsigned int *)(v47 + 4));
    sub_1932AA4C0(a1: v49, a2: v50, a3: v49, a4, a5: v48, a6: v51);
LABEL_13:
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v24,
           a2: v25,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) == 0 )
      goto LABEL_14;
    return 0;
  }
  v7 = a3 + 4;
  v8 = sub_1932AEB84(a1, a2: a3, a3, a4: a3 + 4);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a4 + 224LL);
  if ( v8 != 0 )
  {
    v13 = v11(a1: v9, a2: v10, a3: MEMORY[0x337F50], a4, a5: MEMORY[0x337F48]);
    if ( v13 == 0 )
      return 0;
    v15 = sub_1932AE968(a1: v13, a2: v14, a3: v12, a4: v7);
    sub_1932AA4C0(a1: v16, a2: v17, a3: v16, a4, a5: v15, a6: v18);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v19,
           a2: v20,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) != 0 )
      return 0;
    sub_1932AA540(a1: v21, a2: v22, a3: v21, a4, a5: 1, a6: v23);
    goto LABEL_13;
  }
  v26 = v11(a1: v9, a2: v10, a3: MEMORY[0x337F40], a4, a5: MEMORY[0x337F10]);
  if ( v26 != 0 && (unsigned __int8)sub_1932AA2C0(a1: v26, a2: v27, a3: v26, a4, a5: (_DWORD)v7, a6: v28) != 0 )
  {
    sub_1932AA540(a1: v29, a2: v30, a3: v29, a4, a5: 2, a6: v31);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v32,
           a2: v33,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) == 0 )
    {
      sub_1932AA3B8(a1: v34, a2: v35, a3: v34, a4, a5: *(_DWORD *)(v35 + 24), a6: v36);
LABEL_14:
      *a5 = (unsigned __int16)MEMORY[0x79A48](a1: v38, a2: v39, a3: v37, a4: *(unsigned __int16 *)(v39 + 2));
      return v52;
    }
  }
  return 0;
}
